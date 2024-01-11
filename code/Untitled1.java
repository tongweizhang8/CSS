class VariableTest1 
{
	public static void main(String[] args) 
	{
		//整形：byte：-128~127 short：2字节 int：4字节 long：8字节
		byte b1=12;
		byte b2=-128;
		//b2=128;编译不通过
		System.out.println("b1");
		System.out.println("b2")；
		//声明long型变量，必须以l，L结尾
		//通常定义整形变量时使用int型
		short s1=128;
		int i1=1234;
		long l1=3414234224l;
		System.out.println("l1");
		//浮点型；float4字节/double8字节
		//浮点型表示小数点的数值
		//float表示数值范围比long还大
		double d1=123.3
		System.out.println("d1+1");
		//定义float类型变量时，要以f，F结尾
		float f1=12.3f;
		System.out.println("f1");
		//通常浮点型变量时使用double型
		//定义char型变量时，通常使用一对‘’内部只能写一个字符
		char c1='a';
		//编译不通过
		//c1=‘AB’；
		char c2='1';
		char c3='中';
		char c4='っが';
		System.out.println("c2");
		System.out.println("c3");
		System.out.println("c4");
		//表示方式；1.声明一个字符 2.转义字符 3.直接使用unicode值来表示字符型常量
		char c5='\n';//换行符
		c5='\t';//制表符
		System.out.println("hello"+c5);
		System.out.println("world");

		char c6='\u0043';
		System.out.println("c6");
		//布尔型；boolean
		//只能取两个值之一；true，fause
		//常常在条件判断，循环结构中使用
		boolean bb1=true;
		System.out.println("bb1");

		boolean isMarried=true;
		if(isMarried){
			System.out.println("不能参加\"party\"了");
		}else{
			System.out.println("可以多谈谈女朋友");
		}
	}
}
