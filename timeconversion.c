#include<stdio.h>
int main()
{
	while(1)
	{
	int h,m,s,res;
	int choice;
	printf("Enter hours , minutes and second");
	scanf("%d%d%d",&h,&m,&s);
	printf("Press 1 to calculate time in hours");
	printf("\nPress 2 to calculate time in minutes");
	printf("\nPress 3 to calculate time in seconds");
	printf("\nPress 4 to exit");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=h+(float)m/60.0+(float)s/3600.0
			;
			printf("Time in hours %d ",res);
			break;
		case 2:
			res=h*60+m+s/60;
			printf("Time in minutes %d",res);
			break;
	    case 3:
	    	res=h*3600+m*60+s;
	    	printf("Time in seconds %d",res);
	    	break;
	    case 4:exit(0);	
	    default:
	    	printf("Wrong Choice");
	    	
			
		
	}
}
}
