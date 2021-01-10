#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){				
	int input[3] = {0},save,i,j;
	for(i = 0;i < 3;i++)
	{
		scanf("%d",&input[i]);
	}
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 2 - i;j++)
		{
			if(input[j] > input[j+1])
			{
				save = input[j];
				input[j] = input[j+1];
				input[j+1] = save;
			}
		}
	}
	for(i = 0;i < 3;i++)
	{
		printf("%d ",input[i]);	
	}	
	return 0;
}

//------P5718------------------------------------------

