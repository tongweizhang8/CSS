#include "../.idea/ElemType.h"

#define MaxSize 10

typedef struct{
    ElemType Data[MaxSize];//用静态数组存放最大元素
    int front,rear;//队头指针和队尾指针
}SqQueue;
void testSqQueue(){
    SqQueue();
    InitQueue();
}
//初始化队列
void InitQueue(SqQueue &Q){
    Q.rear = Q.front = 0;
}
//判断队列是否为空
bool QueueIsEmpty(SqQueue Q){
    if(Q.rear == Q.front){//对空条件
        return false;
    }else{
        return true;
    }
}
//入队
bool EnQueue(SqQueue &Q,ElemType x){
    if((Q.rear + 1)%MaxSize==Q.front){
        return false;//队满则报错
    }
    Q.data[Q.rear] = x;//新元素插入队尾
    Q.rear = (Q.rear + 1)%MaxSize;//队尾指针加1取模
    return true;
}
//出队
bool DeQueue(SqQueue &Q,ElemType &x){
    if(Q.rear == Q.front){
        return false;//对空则报错
    }
    x = Q.Data[Q.front];
    Q.front = (Q.front + 1)%MaxSize;//对头指针后移
    return true;
}
//获得队头元素的值，用x返回
bool GetHead(SqQueue Q,ElemType &x){
    if(Q.rear == Q.front){
        return false;
    }
    x = Q.Data[Q.front];
    return true;
}
//新元素入队（不带头结点）
void EnQueue(SqQueue &Q,ElemType x) {
    LinkNode *s = (LinkNode *) malloc(sizeof(LinkNode));
    s->data = x;
    s->next = NULL;
    if(Q.front == NULL) {//在空中队列中插入第一个元素
        Q.front = s;//修改队头队尾指针
        Q.rear = s;
    }else{
        Q.rear->next = s;//新节点插入到rear节点之后
        Q.rear = s;//修改rear节点
    }
}
//队头元素出队（不带头节点）
bool DeQueue(LinkQueue &Q,ElemType &x){
    if(Q.rear == Q.front){
        return false;//空队
    }
    LinkNode *p = Q.front->next;
    x = p->data;//用变量x返回对头元素
    Q.front->next = p->next;//修改头节点next指针
    if(Q.rear == p){//此次是最后一个节点出队
        Q.rear == Q.front;//修改rear指针
    }
    free(p);//释放节点空间
    return true;
}

