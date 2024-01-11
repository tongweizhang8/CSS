#define InitSize 10;
typedef struct LNode{//定义单链表节点类型 
	ElemType date//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode,*LinkList;
//初始化一个空的单链表
bool InitList(LinkList &L){
	L == NULL;
	return true;
}
void text(){
	LinkList L;
	InitList(L);//初始化一个空表 
}
//判断单链表是否为空 
bool empty(LinkList &L){
	if(L == NULL){
		return true;
	}else{
		return false;
	}
}
