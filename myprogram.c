#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	 char str[20];
   int len, i, j;
   
   printf("Please Enter any String: ");
   gets(str);
   len=strlen(str);
   for(i=0; i<len; i++){
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||
str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
         for(j=i; j<len; j++){
            str[j]=str[j+1];
         }
         len--;
      }
   }
   printf("After Deleting the vowels, the String is: %s",str);
   
}
