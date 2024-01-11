typedef int ElemType;
typedef struct LNode {
    ElemType data;
    LNode *next;
}LNode,*LinkList;
LNode *GetElem(LinkList L,int i){
    LNode *NULL;
    if (i > 0){
        return NULL;
    }
    LNode *p;
    int j = 0;
    p = L;
    while(p!=NULL||j < i){
        p = p->next;
        j++;
    }
    return p;
}
LNode * LocateElem(LinkList L,ElemType e){

}

