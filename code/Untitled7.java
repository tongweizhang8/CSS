/*
���������Ԫ�����
1.�ṹ�����������ʽ�������ʽ1�����ʽ2
2.˵�����������ʽ���Ϊboolen���͸����������ʽ���پ���ִ�б����1�����Ǳ��ʽ2
		������ʽΪtrue����ִ�б��ʽ1
		������ʽΪfause����ִ�б��ʽ2
���ʽ1�ͱ��ʽ2��Ҫ����һ�µ�
��Ԫ���������Ƕ��ʹ��
3�����ǿ���ʹ����Ԫ������ĵط��������Ը�д��if-else
��֮��������
4.������򼴿���ʹ����Ԫ��������ֿ���ʹ��if-else�ṹ����ô����ѡ����Ԫ������ṹ

*/
class  SanYuanTest
{
	public static void main(String[] args) 
	{
		//��ȡ���������ϴ�ֵ
		int m = 12;
		int n = 5;
		int max = (m > n)? m :n;
		System.out.println(max);

		double num = (m > n)? 2 :1.0;
		//(m > n)? 2 : "n��";�������
		String maxStr = (m >n)? "m��" : ((m==n)? "m��n���" : "n��);

		//��ȡ���������ֵ
		int n1=12;
		int n2=30;
		int n3=-43;

		int max1=(n1>n2)?n1:n2;
		int max2=(max1>n3)?max1:n3;
		System.out.println("���������ֵΪ" +max2);
		//������
		//int max3=(((n1>n2)?n1:n2)>n3?((n1>n2)?n1:n2):n3;
		System.out.println("���������ֵΪ"+max3);
		//��д��if-else�ṹ
		if(m>n){
		System.out.println(m);
		}else{
			System.out.println(n);
		}
	}
}
