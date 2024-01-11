#define MaxSize 100
//顺序存储
Struct TreeNode{
    ElemType value;
    bool isEmpty;
};
TreeNode t[MaxSize];
for (int i = 0; i < MaxSize;i++) {
    t[i].isEmpty = true;
}
//链式存储
struct ElemType{
    int value;
};
typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
//定义一颗空树
BiTree root = NULL;
//插入根结点
root = (BiTree)malloc(sizeof(BiTNode));
root->data = {i};
root->lchild = NULL;
root->rchild = NULL;
//插入新结点
BiTNode * p = (BiTNode*)malloc(sizeof(BiTNode));
p->data = {2};
p->lchild = NULL;
p->rchild = NULL;
root->lchild = p;//作为根节点的左孩子
//先序遍历
void PreOrder(BiTree T){
    if(T != NULL){
        visit(T);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}
//中序遍历
void PreOrder(BiTree T){
    if(T != NULL){
        PreOrder(T->lchild);
        visit(T);
        PreOrder(T->rchild);
    }
}
//访问节点q
void visit(BiTNode *q){
    if(p == q){
        final = pre;
    }else{
        pre = q;
    }
    BiTNode *p;
    BiTNode *pre = NULL;
    BiTNode *final = NULL;
}
//后序遍历
void PreOrder(BiTree T){
    if(T != NULL){
        PreOrder(T->lchild);
        PreOrder(T->rchild);
        visit(T);
    }
}
//层序遍历
void LevelOrder(BiTree T){
    LinkQueue Q;
    InitQueue(T);
    BiTree(p);
    EnQueue(Q,p);
    while(!IsEmpty(Q)){
        DeQueue(Q,p);
        visit(p);
        if(p->lchild == NULL)
            EnQueue(Q,p->lchild);
        if(p->rchild == NULL)
            EnQueue(Q,p->rchild);
    }
}