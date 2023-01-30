#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int areaOfRectangle(int side1,int side2);//function prototype
int main() {
	int len,width,area;
	printf("Enter the  length of the rectangle:");
	scanf("%d",&len);
		printf("Enter the  width of the rectangle:");
	scanf("%d",&width);
	area= areaOfRectangle(len,width);
	printf(" The length is %d cm,and the width is %d cm.The area of rectangle is %d cm2\n",len,width,area);
	
int number,result;
	printf("Enter the number:");
	scanf("%d",&number);
	result=factorial(number);
	printf("The factorial of %d is %d",number,result);
		return 0;
}
int areaOfRectangle(int side1,int side2){
	int area=side1*side2;
	return  area;
}

 int factorial(int n){
	if (n==0|| n==1)
	return 1;
	else 
	return n * factorial(n-1);
}