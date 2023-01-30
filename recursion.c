#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int num;
//	printf("Enter the number:",num);
//	scanf("%d",&num);
//	int i;
//	for(i=1;i<=num;i++){
//		if(num%i==0){
//			printf("%d\n",i);
//		}
//		else{
//			continue;
//		}
//	}
//printing Fibonacci numbers
//int num1=0,num2=1,num3;
//int nbrOfElements;
//int i;
//int nextNbr;
//printf("Enter the number of elements:");
//scanf("%d",&nbrOfElements);
//printf("The  first two numbers are %d , %d,",num1,num2);
//for(i=2;i<nbrOfElements;++i){
//	num3=num1+ num2;
//	printf("%d ,",num3);
//num1=num2;
//num2=num3;
//num3=num1+num2;
//}
// a program to reverse  a string

char string[20];
char reversedStr[20];
int begin,end,count=0;
// //by using built in functions

//printf("Enter the string :");
//gets(string);
//printf("the string is %s",string);
//printf("\n The reversed string is %s",strrev(string));
//2.without using built functions
printf("Enter the string :");
gets(string);
//calculating string length
while(string[count]!='\0')
count++;
end =count-1;
for(begin=0;begin<count;begin++){
	reversedStr[begin]=string[end];
	end--;
}
reversedStr[begin]='\0';
printf("%s\n",reversedStr);
	return 0;
}
