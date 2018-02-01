#include<stdio.h>
#include<conio.h>
main(){
	int n,g,m;
	printf("How many times:");
	scanf("%d",&m);
	for(int h=0;h<m;h++){
		n=0;
	printf("enter series :");
	scanf("%d",&n);
	int a[n];
	a[n]=0;
	if (n==1){
		printf("0\n");
	}
	else if(n==2)
	{
		printf("0 1\n");
	}
	else if(n>=3){
	a[0]=0;
	a[1]=1;
	for(int i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
for (int j=0;j<n;j++)
{
	printf("%d ",a[j]);
}
}
printf("\n");
}
	getch();
}
