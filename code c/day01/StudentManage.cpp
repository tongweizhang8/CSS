#include<iostream>
#include<string.h>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
//typedef int ElemType;

typedef struct {
    int no;
    char name[10];
    int jyz;
}ElemType;

typedef struct LNode
{
    ElemType data;
    struct LNode* next;
}LNode, * LinkList;

typedef struct {
    char opr;
    int no;
    int jyz;
}SElemType;

typedef struct StackNode {
    SElemType data;
    struct StackNode* next;
}StackNode, * LinkStack;

Status InitList_L(LinkList& L) {
    L = new LNode;
    L->next = NULL;
    return OK;
}

Status ListInser_L(LinkList& L, int i, ElemType& e) {
    //在带头结点的单链表L中第i个位置之前插入元素e
    int j;
    LNode* p, * s;
    p = L; j = 0;
    while (p && j < i - 1) { p = p->next; ++j; }
    if (!p || j > i - 1)return ERROR;
    s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

Status ListDelete_L(LinkList& L, int i, ElemType& e) {
    //在带头结点的单链表L中，删除第i个位置，并由e返回值
    LNode* p, * q;
    int j;
    p = L; j = 0;
    while (p->next && j < i - 1) { p = p->next; ++j; }
    if (!(p->next) || j > i - 1)return ERROR;
    q = p->next;
    p->next = q->next;
    e = q->data;
    delete q;
    return OK;
}


LNode* LocateElem_L(LinkList L, ElemType e) {
    LNode* p;
    p = L->next;
    while (p && strcmp(p->data.name, e.name))
        p = p->next;
    return p;
}


void CreateList_L(LinkList& L, int n) {
    //正位序输入n个元素的值，建立到头结点单链表L
    LNode* r, * p;
    L = new LNode;
    L->next = NULL;
    r = L;
    cout << "请输入" << n << "个数：\n";
    for (int i = 0; i < n; i++) {
        p = new LNode;
        cin >> p->data.no;
        p->next = NULL; r->next = p;
        r = p;
    }
}
