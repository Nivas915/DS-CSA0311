#include <stdio.h>
#include <limits.h>

int main() {
    
    int i,x;
	printf("Enter the number: \n");
    scanf("%d",&x);
    
    int result=0;
    
	while(x!=0){
		int digit = x % 10;
		result = result * 10 + digit;
		x = x/10;
	}
	
	printf("The reverse number: %d\n",result);
	
	return 0;
}
