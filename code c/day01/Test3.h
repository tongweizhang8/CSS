//
// Created by ztw on 12/14/2022.
//

#ifndef CODE_C_TEST3_H
#define CODE_C_TEST3_H
//二叉排序树结点
typedef struct BSTNode{
    int key;
    struct BSTNode *lchild,*rchild;
}BSTNode,*BsTNode;
//在二叉排序树中查找值为key的结点
BSTNode *BST_Search(BSTree T,int key){
    while(T != NULL&&T->key){
        if(key < T->key){
            T = T->rchild;
        }else{
            T = T->lchild;
        }
    }
    return T;
}
//在二叉排序树中查找值为key的结点（递归实现）
BSTNode BSTSearch(BSTree T,int key){
    if(T == NULL){
        return NULL;
    }
    if(key == T->Key){
        return T;
    }else if(key < T->key){
        return BSTSearch(T->lchild,key);
    }else{
        return BSTSearch(T->rchild,key);
    }
}
//在二叉排序树中插入值为key的结点（递归实现）
int BST_Insert(BSTree &T,int k){
    if(T == NULL){
        T = (BSTree *)malloc(sizeof(BSTree));
        T->key = k;
        T->lchild = T->rchild = NULL;
        return 1;
    }else if(k == T->key){
        return 0;
    }else if(k < T->key){
        return BSTSearch(T->lchild,key);
    }else{
        return BSTSearch(T->rchild,key);
    }
}
#endif //CODE_C_TEST3_H
