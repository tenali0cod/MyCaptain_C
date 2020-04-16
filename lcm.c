#include<stdio.h>
int lcm(int,int);
int main(){
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("LCM of %d and %d is %d",n1,n2,lcm(n1,n2));
	return 0;
}
 int lcm(int n1, int n2){
    static int i=1;
    if(i%n1 ==0 && i%n2 ==0)
    	return i;
    else{
    	i++;
    	lcm(n1,n2);
	}
 }
