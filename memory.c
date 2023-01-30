#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//a program to find product of n numbers
	int n,*ptr,product=0,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	ptr=(int*) malloc(n * sizeof(int));
	if(ptr==NULL){
		printf("memory cannot be allocated");
		exit(0);
	}
	printf("Enter the elements:");
	for(i=0;i<n;++i){
		scanf("%d",ptr+i);//ptr+i
		product *= *(ptr+i);//ptr[i]
	}
	printf("%d",product);
	free(ptr);

	return 0;
}
