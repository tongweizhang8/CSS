#include <stdio.h>
#include <stdlib.h>
typedef struct BiTrNode{
    char data;
    struct BiTrNode *lchild,*rchild;
    Pointertag Ltag,Rtag;
}BiTrNode,*BiTree;

BiTree pre = NULL;//pre指针在此定义为全局变量

void PreThread(Thread T){
    if(T != NULL){
        visit(T);
        PreThread(T->lchild);
        PreThread(T->rchild);
    }
}
void PreThread (ThreadTree T) {
    if(T != NULL){
        visit(T);
        if(T->ltag == 0){
            PreThread(T->lchild);
        }
        PreThread(T->rchild);
    }
}
void visit(ThreadNode *q){
    if(q->lchild == NULL){
        q->lchild = pre;
        q->ltag = 1;
    }
    if(pre != NULL&&pre->rchild != NULL){
        pre->rchild = q;
        pre->rtag = 1;
    }
    pre = q;
}
ThreadNode *pre = NULL;

void CreatePostThread(ThreadTree T) {
    pre = NULL;
    if(T != NULL){
        PostThread(T);
        if(pre->rchild != NULL){
            pre->rtag = 1;
        }
    }
}