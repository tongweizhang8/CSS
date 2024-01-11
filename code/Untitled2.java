class  VariableTest{
	public static void main(String[] args) {
		//变量的定义
		int myAge=12
		//变量的使用
		System.out.println("Hello World!");
		//编译错误；使用myNumber之前并未定义过
		System.out.println("myNumber");
		//变量的声明
		int myNumber;
		//编译错误；使用myNumber之前并未赋值过
		System.out.println("myNumber");
		//变量的赋值
		myNumber=1001
		System.out.println("myClass");
	}
	public void method(){
		int myClass=1;
	}
}
