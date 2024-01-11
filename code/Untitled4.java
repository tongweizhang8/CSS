/*
String属于引用数据类型，翻译为字符串
声明string类型变量时，使用一对“”
String可以和8种基本数据变量做运算，且运算只能是连接运算+

*/
class StringTest 
{
	public static void main(String[] args) 
	{
		String s1 ="Hello World";
		System.out.println("Hello World!");
		String s2="a";
		String s3="";

		char c ="";
		//char c=''编译不通过

		int number = 1001;
		String numberStr="学号：";
		String info = numberStr + number;//+连接运算
		boolean b1=true;
		String info1 = info + b1;//+连接运算
		System.out.println("b1");

		//练习1
		char c ='a';
		int num =10;
		String str ="Hello";
		System.out.println(c+num+str);//107hello
	    System.out.println(c+str+num);//ahello10
		System.out.println(c+(num+str));//a10hello
		System.out.println((c+num)+str);//107hello
		System.out.println(str+num+c);//hello10a
;
	}

}
