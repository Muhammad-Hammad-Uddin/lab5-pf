#include<stdio.h>
main(){
    char y;
    printf("enter character");
    scanf("%c",&y);
    if (y>='a'&&y<='z'){
    	printf("it is a small charaacter");
	}
	else if(y>='A'&& y<='Z'){
		printf("it is amall character");
	}
	else if(y>='0' && y<='9'){
	printf("it is a number ");
	}
	else{
	printf("it is a special character");
	}
}
