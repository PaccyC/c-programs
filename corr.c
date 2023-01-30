#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	float  a,b,c,sum;
//	float average;
//	printf("Enter the three numbers:");
//	
//	scanf("%f%f%f",&a,&b,&c);
//	sum=a+b+c;
//	printf("the sum of %f,%f,%f is %f:",a,b,c,sum);

//finding the number of digits in  a  number
int number,count=0;
int sum=0;
printf("Enter the number:");
scanf("%d",&number);
while(number!=0){
	
	number=number/10;
	count=count+1;
	sum +=number%10;
sum++;
}

printf("The number of digits is %d",count);
printf("The sum of digits is %d",sum);
	return 0;
}
