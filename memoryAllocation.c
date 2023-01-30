#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//dynamic memory allocatiion
//	malloc()
//ptr=(float*)malloc(100 * sizeof(float));
//calloc()
//eg:ptr=(float*)calloc(25,sizeof(float));

//free();
//syntax=free(ptr);
//program to calculate the sum of n numbers entered by the user
//int n,i,*ptr,sum=0;
//printf("Enter the number of elements:");
//scanf("%d",&n);
//ptr=(int*) malloc(n * sizeof(int));
////if memory cannot be allocated
//if(ptr==NULL){
//	printf("Error!memory cannot be allocated.");
//	exit(0);
//}
//printf("Enter elements: ");
//for(i=0;i<n;++i){
//	scanf("%d",ptr+i);//same as &ptr[i]
//	sum +=*(ptr+i);//same as ptr[i];
//}
//printf("Sum=%d",sum);
////deallocation of memory
//free(ptr);
//2.by using calloc();
//int i,n,sum=0,*ptr;
//printf("Enter the number of elements:");
//scanf("%d",&n);
//ptr=(int*) calloc(n,sizeof(int));
//if(ptr==NULL){
//	printf("sorry!Memory cannot be allocated");
//	exit(0);
//}
//printf("Enter the elements:");
//for(i=0;i<n;++i){
//	scanf("%d",&ptr[i]);
//	sum += *(ptr+i);
//}
//free(ptr);
//printf("Sum =%d",sum);
//3.realloc()
int *ptr,i,n1,n2;
printf("Enter the size: ");
scanf("%d",&n1);
ptr=(int*) malloc(n1 *sizeof(int));
printf("Addresses of previously allocated memory:\n");
for(i=0;i<n1;++i)
printf("%p\n",ptr+i);
printf("\nEnter the new size:");
scanf("%d",&n2);
//reallocating the memory
ptr =realloc(ptr, n2 * sizeof(int));
printf("Address of newly allocated memory:\n");
for(i=0;i<n2;++i)
printf("%p\n",ptr+i);
free(ptr);

	return 0;
}
