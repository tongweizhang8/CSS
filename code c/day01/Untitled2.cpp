#include<stdio.h>
#define InitSize 10;
typedef struct LNode{//定义单链表节点类型 
	ElemType date//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode,*LinkList;
struct LNode{//定义单链表节点类型 
	ElemType data;//每个节点存放一个数据源素 
	struct LNode *next;//指针指向下一个节点 
};
typedef struct LNode LNode;
typedef struct LNode *LinkList;
LNode *GetElem(LinkList L,int i){
	int j = 1;
	LNode *p = L -> next;
	if(i == 0){
		return L;
	}
	if(i < 1){
		return NULL;
	}
	while(!p = NULL||i > j){
		p = p -> next;
		j++
	}
	return p;
}
