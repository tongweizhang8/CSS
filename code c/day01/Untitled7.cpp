typedef struct LNode{//定义单链表节点类型 
	ElemType date//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode,*LinkList;
//带头结点 
bool InitList(LinkList &L){
	L = (LNode *)malloc(sizeof(LNode));//分配一个头节点 
	if(L == NULL){//内存不足，分配失败 
		return false;
	} 
	L -> next = NULL;//头节点之后没有节点 
	return true;
}
void test(){
	LinkList L;
	InitList(L);
} 
//判断单链表是否为空（带头结点�
bool empty(LinkList &L){
	if(L -> = NULL){
		return true;
	}else{
		return false;
	}
}

