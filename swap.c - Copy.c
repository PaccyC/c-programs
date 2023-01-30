#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(char *str1,char *str2){
	char temp;
	int i=0;
	for(i=0;i<strlen(str1);i++){
		temp=str1[i];
		str1[i]=str2[i];
		str2[i]=temp;
	}
	
}
	

int main(int argc, char *argv[]) {
	char  string1[10]="hello";
	char string2[10]="world";
	printf("\n String 1:%s",string1);
	printf("\nString 2:%s",string2);
	swap(string1,string2);
	
	return 0;
}

