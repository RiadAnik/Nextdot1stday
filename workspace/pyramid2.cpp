#include<stdio.h>
#include<conio.h>
main(){
	int n,g;
	printf("Enter how many times:");
	scanf("%d",&g);
	for (int h=0;h<g;h++){
	
	printf("Enter the number :");
	scanf("%d",&n);
	for(int i=n;i>=0;i--)
	{
		for(int j=0;j<i;j++){
				int l=i-1;
			int x=n-l;
			if(j<i-1){
				printf(" ");
				
			}
			else{
				if(i==n)
				{
				printf("*");
				}
				else{
					for(int l=0;l<x*2-1;l++)
				{
				
				printf("*");}
				}
				
		}
		
	}
	printf("\n");
}
		
}

	getch();
}
