#include<stdio.h>
#include "major1.h"

int main()
{
	int replaceNum=0,replaceMask,index;
    while(1)
    {
	    printf("Input a positive integer less than 2 million: ");
	    scanf("%d",&replaceNum);
        if(replaceNum<0 || replaceNum>2,000,000,000){
            continue;
          }
        else{break;}
    }
    
    while(1)
    {
	    printf("Input a positive integer mask less than 3 million: ");
	    scanf("%d",&replaceMask);
        if(replaceMask<0 || replaceMask>3,000,000,000){
            continue;
        }
        else{break;}
    }
    
    while(1)
    {
        printf("enter bit replacement position from mask (0-indexed): ");
	    scanf("%d",&index);
	    if(index>31 || index<0){
	        continue;
          }
        else{break;}
    }

	
	int temp=(replaceMask>>index)&1;


	if(temp==1){
		temp=temp<<index;
		replaceNum|=temp;
	}
	else{ 
		int flag=4294967295;
		temp=1<<index;
		
		flag=flag^temp;
		replaceNum&=flag;
	}

	printf("New integer : %d\n",replaceNum);
	return 0;
}
