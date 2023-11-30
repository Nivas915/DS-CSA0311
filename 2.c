#include<stdio.h>

int main(){
	
	int i,n;
	printf("Enter the number for the limit: \n");
	scanf("%d",&n);
	
	printf("Even number: \n");
	for(i=0;i<=n;i++)
	{
		if(i%2==0){
			printf("%d  ",i);
		}
	}
	
	printf("\nOdd numbers\n");
	for(i=0;i<=n;i++)
	{
		if(i%2!=0){
			printf("%d  ",i);
		}
	}
	
}
