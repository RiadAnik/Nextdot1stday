#include<stdio.h>
#include<conio.h>
main(){
	int n,g;
	printf("Enter how many times:");
	scanf("%d",&g);
	for (int h=0;h<g;h++){
	
	printf("Enter the number :");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}
	getch();
}
