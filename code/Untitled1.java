class VariableTest1 
{
	public static void main(String[] args) 
	{
		//���Σ�byte��-128~127 short��2�ֽ� int��4�ֽ� long��8�ֽ�
		byte b1=12;
		byte b2=-128;
		//b2=128;���벻ͨ��
		System.out.println("b1");
		System.out.println("b2")��
		//����long�ͱ�����������l��L��β
		//ͨ���������α���ʱʹ��int��
		short s1=128;
		int i1=1234;
		long l1=3414234224l;
		System.out.println("l1");
		//�����ͣ�float4�ֽ�/double8�ֽ�
		//�����ͱ�ʾС�������ֵ
		//float��ʾ��ֵ��Χ��long����
		double d1=123.3
		System.out.println("d1+1");
		//����float���ͱ���ʱ��Ҫ��f��F��β
		float f1=12.3f;
		System.out.println("f1");
		//ͨ�������ͱ���ʱʹ��double��
		//����char�ͱ���ʱ��ͨ��ʹ��һ�ԡ����ڲ�ֻ��дһ���ַ�
		char c1='a';
		//���벻ͨ��
		//c1=��AB����
		char c2='1';
		char c3='��';
		char c4='�ä�';
		System.out.println("c2");
		System.out.println("c3");
		System.out.println("c4");
		//��ʾ��ʽ��1.����һ���ַ� 2.ת���ַ� 3.ֱ��ʹ��unicodeֵ����ʾ�ַ��ͳ���
		char c5='\n';//���з�
		c5='\t';//�Ʊ��
		System.out.println("hello"+c5);
		System.out.println("world");

		char c6='\u0043';
		System.out.println("c6");
		//�����ͣ�boolean
		//ֻ��ȡ����ֵ֮һ��true��fause
		//�����������жϣ�ѭ���ṹ��ʹ��
		boolean bb1=true;
		System.out.println("bb1");

		boolean isMarried=true;
		if(isMarried){
			System.out.println("���ܲμ�\"party\"��");
		}else{
			System.out.println("���Զ�̸̸Ů����");
		}
	}
}
