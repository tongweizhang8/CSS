/*
��֧�ṹ�е�if-else�������жϽṹ��
1.���ֽṹ
��һ��
if���������ʽ��{
	ִ�б��ʽ
	}
�ڶ��֣���ѡһ
if���������ʽ��{
	ִ�б��ʽ1
	}else{
		ִ�б��ʽ2
		}
�����֣���ѡһ
if���������ʽ��{
	ִ�б��ʽ1
	}else if���������ʽ��{
		ִ�б��ʽ2
		}
	}else if���������ʽ��{
		ִ�б��ʽ3
		}
	*/
class  IfTest
{
	public static void main(String[] args) 
	{
		//����1
		int heartbeats=79;
		if(heartbeats<60||heartbeats>100){
		System.out.println("��Ҫ��һ�����");
		}
		System.out.println("��Ҫ��һ�����")��
		
		//����2
		int age=23;
		if(age<18){
			System.out.println("�㻹���Կ�����Ƭ");
		}else{
			System.out.println("����Կ����˵�Ӱ��");
		
		}

		//����3
		if(age<0){
			System.out.println("���������ݷǷ�");
		}else if(age<18){
			System.out.println("������ʱ��");
		}else if(age<35){
			System.out.println("��׳��ʱ��");
		}else if(age<60){
			System.out.println("����ʱ��");
		}else if(age<120){
			System.out.println("����ʱ��");
		}else{
			System.out.println("����");
		}
	}
}
