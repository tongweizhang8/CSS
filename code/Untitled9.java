/*
如何从键盘获取不同类型的变量，需要使用scanner型

具体实现步骤；
1.导包；import java.util.Scanner
2Scanner的实例化；Scanner scan = new Scanner(System.in)
3.调用Scanner类的相关方法，来获取指定类型的变量

注意；
需要根据相应的方法，来输入指定类型的值。如果输入的数据类型与要求的类型不匹配时，会报异常；InputMisMatchException
导致程序终止
*/
//1.导包；import，java.util.Scanner;
import java.util.Scanner;
class scannerTest
{
	public static void main(String[] args) 
	{
		//2.Scanner的实例化
		Scanner scan = new Scanner(System.in);

		//调用Scanner类的相关方法
		System.out.println("请输入你的姓名");
		String name = scan.next();
		System.out.println(name);

        System.out.println("请输入你的年龄");
		String age = scan.next();
		System.out.println(age);

		System.out.println("请输入你的体重");
		String weight = scan.next();
		System.out.println(weight);

		System.out.println("你是否相中我了呢（true/fause）");
		String islove = scan.next();
		System.out.println(islove);

		int num = scan.nextInt();

		//对于char型的获取，Scanner没有提供相关的办法，只能获取一个字符串
		System.out.println("请输入你的性别");
		String gender = scan.next();//man
		char gendetChar = gender.charAt(0);//获取索引为0的字符

		
	}
}
