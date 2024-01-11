#define MaxSize 10//定义最大长度
typedef struct{
	int data[MaxSize];//静态数组存放数据元素
	int length;//顺序表当前长度 
}SqList;
bool ListDelete(SqList &L,int i,int &e){
	if(i < 0||i > L.length){
		return false;
	}
	e = L.data[i - 1];//将被删除的元素赋给e
	for(int j = i;j < L.length;j++){//第i个位置后的元素前移	 
		L.data[j - 1] = L.data[j];
	} 
	L.length--;
	return true;
}
int main(){
	SqList &L;
	InitList L;
	int e = -1;//用变量e把删除的元素带回来 
	if(ListDelste(L,3,e)){
		printf("%d",e);
	}else{
		printf("false")
	}
	return 0;
}
