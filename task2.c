#include<stdio.h>
main(){
	int WolfA,WolfB,sheep,distance1,distance2,distance;
	printf("positon of WolfA");
	scanf("%d",&WolfA);
	printf("positon of WolfB");
	scanf("%d",&WolfB);
	printf("positon of sheep");
	scanf("%d",&sheep);
	distance1=sheep-WolfA;
	distance2=sheep-WolfB;
	distance=fabs(distance1);
	distance=fabs(distance2);
	if(distance1>distance2)
	printf("WolfB");
	else if (distance1<distance2)
	printf("WolfA");
	else 
	printf("error");
}
