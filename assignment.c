#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n);
int main(int argc, char *argv[]) {
	int i,j;
	int n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
	
		printf("*");
	}
	printf("\n");
	}
	//a program to print D pattern
//	
//	int i,j;
//	int n;
//	printf("Enter the number of rows:");
//	scanf("%d",n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//inverted right angle
//
	int rows;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=rows;i>=1;--i){
		for(j=1;j<=i;++j){
		printf("*");
			
		}
		printf("\n");
	}

//using recursion to find factorial of number
//	int number;
//	int result;
//	printf("Enter the number:");
//	scanf("%d",&number);
//	result=factorial(number);
//	printf("%d",result);
	
//finding factorial of a number without recursion
//int n;
//int i;
//unsigned long long res=1;
//printf("Enter the number:");
//scanf("%d",&n);
//for(i=1;i<=n;++i){
//	res=res*i;
//	
//}
//	printf("%llu",res);
	return 0;
}
//int factorial(int n){
//	if(n==1)
//	return 1;
//	
//	else
//	return n * factorial(n-1);
//}