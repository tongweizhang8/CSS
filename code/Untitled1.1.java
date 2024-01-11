/*
基本数据类型之间的运算规则
前提；只是讨论7种基本数据类型之间的运算规则
1.自动类型提升；

2.强制类型转换

*/
class  VariableTest2
{
	public static void main(String[] args) 
	{
		byte b1=2;
		int i1=129;
		//编译不通过
		//byte b2=b1+i1
		int i2=b1+i1;
		System.out.println("i2");
	}
}
