#include<stdio.h>
#include<conio.h>
main(){
	int n,flag,g;
	printf("How many times:");
	scanf("%d",&g);
	for(int j=0;j<g;j++)
	{
	
	printf("Enter a number: ");
	scanf("%d",&n);
	flag=0;
	for (int i=2;i<n/2;i++)
	{
		if((n%i)==0)
		{
			flag=1;
			break;
		}
		else{
			continue;
		}
	}
	if(flag==0)
	{
		printf("prime number\n");
	}
	else{
		printf("not a prime number \n");
	}
}
	getch();
}
