/*
String���������������ͣ�����Ϊ�ַ���
����string���ͱ���ʱ��ʹ��һ�ԡ���
String���Ժ�8�ֻ������ݱ��������㣬������ֻ������������+

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
		//char c=''���벻ͨ��

		int number = 1001;
		String numberStr="ѧ�ţ�";
		String info = numberStr + number;//+��������
		boolean b1=true;
		String info1 = info + b1;//+��������
		System.out.println("b1");

		//��ϰ1
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
