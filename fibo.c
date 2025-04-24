#include<stdio.h>
int main(){
	int p,n;
	int num1 = 0, num2 = 1;
		printf("Enter the number of terms:");
				scanf("%d",&n);
	int nextterm = num1 + num2;
	printf("Fabonacci series:");
	for(p=0;p<=n;p++){
		int nextterm = num1 + num2;  
		
		
		printf("%d ",num1);
		num1 = num2;
		num2 = nextterm;
	}
	return 0;
}
