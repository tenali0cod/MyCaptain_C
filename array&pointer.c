#include<stdio.h>
int main(){
	int a[3][3], *p[3][3],i=0,j=0,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			p[i][j]=&a[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j){
				sum=sum + a[i][j];
			}
		}
	}
    printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*p[i][j]);
		}
		printf("\n");
	}
	printf("\nThe sum of diagonal elements is %d\n",sum);
	return 0;
}
