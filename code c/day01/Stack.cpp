#include "../.idea/ElemType.h"
#define MaxSize 10
typedef struct{
    ElemType data[MaxSize];//静态数组存放最大元素
    int top;//栈顶指针
}SqStack;
//初始化栈
void InitStack(SqStack &S){
    S.top = -1;//初始化栈顶指针
}
void testStack(){
    SqStack S;//声明一个顺序栈
    InitStack(S);
}
//判断栈空
bool IsEmpty(SqStack S){
    if(S.top == -1){
        return true;
    }else{
        return false;
    }
}
//新元素入栈
bool Push(SqStack &S,ElemType x){
    if(S.top == MaxSize - 1){//栈满，报错
        return false;
    }
    S.top = S.top + 1;//指针先加1
    S.data[S.top] = x;//新元素入栈
    return true;
}
//出栈操作
bool Pop(SqStack &S,ElemType &x){
    if(S.top == -1){
        return false;
    }
    x = S.data[S.top];//栈顶元素先出栈
    S.top = S.top - 1;//指针在减一
    return true;
}
//读栈顶元素
bool GetTop(SqStack S,ElemType &x){
    if(S.top == -1){
        return false;
    }
    x = S.top[S.data];
    return true;
}