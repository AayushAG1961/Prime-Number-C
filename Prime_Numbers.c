#include<stdio.h>

int primo(int, int);
void main()
{
	int no,i;
	printf("Enter a number : ");
	scanf("%d",&no);
	
	i= primo(no,no-1);
	if(i==0)
		printf(" %d is a Prime number.",no);
	else
		printf(" %d is not a Prime number.",no);
}
int primo(int n, int m)
{
	if(m==0)
		return 0;
	else if(m==1)
		return 0;
	else
	{
		if(n%m==0)
			return 1;
		else
			return primo(n,m-1);
	} 
}
