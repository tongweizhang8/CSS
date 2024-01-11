//第i个位置插入元素e
bool ListInsert(LinkList &L,int i,ElemType e){
	if(i<1){
		return false;
	}
	LNode *p;//p指向当前扫描到的结点 
	int j = 0;//当p指向的是第几个节点 
	p = L;//l指向头节点，头节点是第0个节点 
	while(p!=NULL||j<i-1){//循环找到第i-1个结点 
		p = p->next;
		j++;
	}
	if(p == NULL){
		return false;
	}
	LNode *s = (LNode *)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;//将节点s连接到p之后 
	return true;
} 
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;
