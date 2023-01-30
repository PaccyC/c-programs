#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int addition(int num1, int num2);

int main(int argc, char *argv[]) {
//	int n1,n2,result;
//	printf("Enter the first number:");
//	scanf("%d",&n1);
//	printf("enter the second number:");
//	scanf("%d",&n2);
//	result= addition(n1,n2);
//	printf("The result is %d\n",result);
//	printf("%p",&result);   
	//pointers
	int *pc,c;
	c=22;
	printf("Address of c:%p\n",&c);
	printf("value of c:%d\n\n",c);
	pc=&c;
	c=11;
	printf("Address of c:%p\n",pc);
	printf("Content pointed b pc:%d\n\n",*pc);
	*pc=2;
	printf("Address of c:%p\n",&c);
	
	printf("value of c:%d",c);
	
	return 0;
}

int addition(int num1, int num2){
	
	return num1+num2;
}