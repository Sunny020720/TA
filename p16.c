//p16
#include<stdio.h>
int main()
{
	int height,length,width,volume,weight;
	
	printf("enter height of box:");
	scanf("%d",&height);
	printf("enter length of box:");
	scanf("%d",&length);
	printf("enter width of box:");
	scanf("%d",&width);
	volume = height*length*width;
	weight=(volume+165)/166;
	
	printf("Volume: %d\n",volume);
	printf("dimensional weight:%d\n",weight);

    return 0;
}
