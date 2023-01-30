#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// bubble sort
	int n,numbers[10],i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	 printf("Enter the elements:");
	 for(i=0;i<n;i++){
	 	if(numbers[i]>numbers[i+1]){
	 		int temp= numbers[i];
	 		numbers[i]=numbers[i+1];
	 		numbers[i+1]=temp;
		 }
	 	
	 scanf("%d",&numbers[i]);
	 }
	return 0;
}