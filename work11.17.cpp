#include<stdio.h>
#include<string.h>

int main()
{
	//31个省的车牌为京，沪，津，渝，鲁，冀，晋，蒙，
	//辽，吉，黑，苏，浙，皖，
	//闽，赣，豫，湘，鄂，粤，
	//	桂，琼，川，贵，云，藏，
	//陕，甘，青，宁，新，
	//港，澳，台，挂，警，学，使，领。
    char plate[16]={}; 
    
    char car[16][3]={};//将原数组存入的二维数组 
	int i = 0;
	
	int a=1;
	while(a) 
{
	printf("请输入车牌号：\n") ;
	scanf("%s",plate); 
	
	//存入二维数组
	int n = 0;//car的下标 
	for(i = 0;i < 16;i++)
	{
		if(plate[i] < 0)
		{
			car[n][0]  =  plate[i];
			car[n][1]  =  plate[i+1];
			
			i++;		 
		} 
		else
		{
			car[n][0]  =  plate[i];
			
			
		}
		n++;
    }
	
	//查看二维数组 
/*	for(i = 0;i < 16;i++)	
    {
   	printf("car[%d]= %s  ",i,car[i]);
	 } 
    printf("\n");*/ 
   
    //utf-8
    char name[40][3]={"京","沪","津","鲁","冀","晋","蒙","辽","吉","黑",
				   	"苏","浙","皖","闽","赣","豫","湘","鄂","粤","桂",
					"琼","川","贵","云","藏","陕","甘","青","宁","新",
					"港","澳","台","挂","警","学","使","领"} ;
    
    char utf[40][16]={"E4BAAC","E6B2AA","E6B4A5","E9B281","E58680","E6998B","E89299","E8BEBD","E59089","E9BB91",
	                "E88B8F","E6B599","E79A96","E997BD","E8B5A3","E8B1AB","E6B998","E98482","E7B2A4","E6A182",
					 "E790BC","E5B79D","E8B4B5","E4BA91","E8978F","E99995","E79498","E99D92","E5AE81","E696B0",
					 "E6B8AF","E6BEB3","E58FB0","E68C82","E8ADA6","E5ADA6","E4BDBF","E9A286"}; 
    
	for(n = 0;n < 10;n++)
	{
		for(i = 0;i < 40;i++)
		{
	
		if( strcmp(car[n],name[i]) == 0) //比较字符串 
	   		{
	    	    printf(" %s ",utf[i]);  //是汉字，输出UTF-8码 
	    	    break;
	   		}    
		} 
	
		if(i == 40)
		{
		printf("%s",car[n]) ;//查找完，不是汉字，直接输出 
		}
	}
	
    printf("\n输入0退出，其他继续\n");
	scanf("%d",&a); 

}
	return 0;
 } 
