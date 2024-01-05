#include<stdio.h>
main(){
	int a,b;
	printf("enter cost of item");
	scanf("% d",&a);
	
		
		
	
	if (a>=2000 || a<=4000){
		b=a*0.8;
		printf("actual amount is %d\n",a);
		printf("price after discount is %d\n",b);
		printf("saved amount is %d\n",a-b);
}
	else if(a>4000 || a<=6000) {
		b=a*0.7;
		printf("actual amount is %d",a);
		printf("price after discount is %d",b);
		printf("saved amount is %d",a-b);
	}
	else if (a>6000){
		
			b=a*0.5;
		
		printf("actual amount is %d",a);
		printf("price after discount is %d",b);
		printf("saved amount is %d",a-b);
		
		
	}
	else{
		printf("no discount");
	}
		
		
}


