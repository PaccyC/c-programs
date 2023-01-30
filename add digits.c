#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num , dig ,sum =0;
	printf("enter a number:");
	scanf("%d",&num);
	dig=0;
	while (num!=0){
		sum += num%10;
		num= num/10;
		dig = dig +1;
		
	}
	printf("the number of digits is:%d",dig);
	printf(" the sum of digits is :%d",sum);

	return 0;
}
