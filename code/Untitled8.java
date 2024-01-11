/*
分支结构中的if-else（条件判断结构）
1.三种结构
第一种
if（条件表达式）{
	执行表达式
	}
第二种；二选一
if（条件表达式）{
	执行表达式1
	}else{
		执行表达式2
		}
第三种；多选一
if（条件表达式）{
	执行表达式1
	}else if（条件表达式）{
		执行表达式2
		}
	}else if（条件表达式）{
		执行表达式3
		}
	*/
class  IfTest
{
	public static void main(String[] args) 
	{
		//举例1
		int heartbeats=79;
		if(heartbeats<60||heartbeats>100){
		System.out.println("需要进一步检查");
		}
		System.out.println("需要进一步检查")；
		
		//举例2
		int age=23;
		if(age<18){
			System.out.println("你还可以看动画片");
		}else{
			System.out.println("你可以看成人电影了");
		
		}

		//举例3
		if(age<0){
			System.out.println("您输入数据非法");
		}else if(age<18){
			System.out.println("青少年时期");
		}else if(age<35){
			System.out.println("青壮年时期");
		}else if(age<60){
			System.out.println("中年时期");
		}else if(age<120){
			System.out.println("老年时期");
		}else{
			System.out.println("成仙");
		}
	}
}
