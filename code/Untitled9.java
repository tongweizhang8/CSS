/*
��δӼ��̻�ȡ��ͬ���͵ı�������Ҫʹ��scanner��

����ʵ�ֲ��裻
1.������import java.util.Scanner
2Scanner��ʵ������Scanner scan = new Scanner(System.in)
3.����Scanner�����ط���������ȡָ�����͵ı���

ע�⣻
��Ҫ������Ӧ�ķ�����������ָ�����͵�ֵ��������������������Ҫ������Ͳ�ƥ��ʱ���ᱨ�쳣��InputMisMatchException
���³�����ֹ
*/
//1.������import��java.util.Scanner;
import java.util.Scanner;
class scannerTest
{
	public static void main(String[] args) 
	{
		//2.Scanner��ʵ����
		Scanner scan = new Scanner(System.in);

		//����Scanner�����ط���
		System.out.println("�������������");
		String name = scan.next();
		System.out.println(name);

        System.out.println("�������������");
		String age = scan.next();
		System.out.println(age);

		System.out.println("�������������");
		String weight = scan.next();
		System.out.println(weight);

		System.out.println("���Ƿ����������أ�true/fause��");
		String islove = scan.next();
		System.out.println(islove);

		int num = scan.nextInt();

		//����char�͵Ļ�ȡ��Scannerû���ṩ��صİ취��ֻ�ܻ�ȡһ���ַ���
		System.out.println("����������Ա�");
		String gender = scan.next();//man
		char gendetChar = gender.charAt(0);//��ȡ����Ϊ0���ַ�

		
	}
}
