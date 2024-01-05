#include <stdio.h>

int main() {
char ch1,B,W;
int cupsize;

    
    printf("press B for black coffee or press W white coffee\n");
    printf("enter type of coffee\n ");
    scanf("%c",&ch1);
    
    
	
    
    
    switch(ch1)
    {
        case 'B':
        printf("enter cup size for single press 1 for double press 2 \n");
        scanf("%d",&cupsize);
        if(cupsize!=1 && cupsize!=2){
		
        printf("please select double or single");
        
        return 1;
    }
        switch(cupsize)
        {
        case 1:
        printf("Put water 15min\n");
        printf("sugar 15 min\n");
        printf("mix well 20 min\n");
        printf("add coffe 2min\n");
        printf("add milk 4min\n");
        printf("mix well 20 min\n");
        printf("coffe time=76 min\n");
        break;
        case 2:
        printf("Put water 22.5 min\n");
        printf("sugar 22.5min\n");
        printf("mix well 30 min\n");
        printf("add coffe 3 min\n");
        printf("add milk  6 min\n");
        printf("mix well 30 min\n");
        printf("coffe time=114min\n");
        break;
        }
        break;
        case 'W':
        printf("enter cup size for single press 1 for double press 2\n");
        scanf("%d",&cupsize);
         if(cupsize!=1 && cupsize!=2){
		
        printf("please select double or single");
        
        return 1;
    }
        switch(cupsize)
        {
        case 1:
        printf("Put water 20 min");
        printf("sugar 20 min");
        printf("mix well 25 min");
        printf("add coffe 15min");
        printf("add milk 0 min");
        printf("mix well 25 min");
        printf("coffe time= 105 min");
        break;
        case 2:
        printf("Put water 30 min\n");
        printf("sugar 30 min\n");
        printf("mix well 37.5 min\n");
        printf("add coffe 22.5 min\n");
        printf("add milk  0 min\n");
        printf("mix well 37.5 min\n");
        printf("coffe time=157.5min\n");
        break;
        }
        break;
        default:
        	printf("invalid choice");
        
     }
     
     
}
