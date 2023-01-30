#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char str1[50],str2[50];
	printf("Enter the first string:");
	gets(str1);
	printf("\n Enter the second string:");
	gets(str2);
	printf("%ld",strlen(str1));
	printf("\n %ld",strlen(str2));
//	printf("\n the strcopy of second string is: %s",strcpy(str1,str2));
//	printf("\n the strcat of second string is %s",strcat(str1,str2));
	printf("\n the strcomp of second string is %d",strcmp(str1,str2));
}