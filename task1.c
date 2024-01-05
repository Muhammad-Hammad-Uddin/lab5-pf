#include<stdio.h>
main(){
	int nts,fsc;
	printf("enter obtained percentage in nts\n");
	scanf("%d",&nts);
	printf("enter obtained percentage in fsc\n");
	scanf("%d",&fsc);
	if(fsc<0 || fsc>100 && nts<0 || nts>100)
	{
		printf("please insert correct information");
		
	}
	else if (fsc>70 && nts>70)
	{
		printf("eligible for IT,telecommunication and in electronics at Oxford University");
		printf("eligible for chemical and computer department at MIT");
	}
	else if (fsc>70 && nts>60){
	
	printf("eligible for telecommunication and in electronics at Oxford University");
	printf("eligible for IT, chemical and computer department at MIT");
}
else if (fsc>70 && nts>50){
	
	printf("eligible for telecommunication  at Oxford University");
	printf("eligible for IT, chemical and computer department at MIT");
}
else if (fsc<70 && fsc>60 && nts>50){
	
	
	printf("eligible for IT, chemical and computer department at MIT");
}
else if (fsc<60 && fsc>50 && nts>50){
	
	
	printf("eligible for  chemical and computer department at MIT");
}
else if (fsc<5 && fsc>40 && nts>50){
	
	
	printf("eligible for computer department at MIT");
	
}
else{
	printf("better luck next time not eligible");
}
}
