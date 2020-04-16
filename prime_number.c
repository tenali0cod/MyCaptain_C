#include<stdio.h>
int checkPrimeNumber(int);
int main()
{
	int num,flag;
	printf("Enter a number:");
	scanf("%d",&num);
	flag= checkPrimeNumber(num);
	if(flag==1)
	printf("%d is a prime number",num);
	else
	printf("%d is not a prime number",num);
	return 0;
}

int checkPrimeNumber(int num)
{
	int i,flag=1;
	for(i=2;i< num/2;i++)
	if(num%i==0)
		{
		    flag=0;
			break;
		}
		return flag;
}
