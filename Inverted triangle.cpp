#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(){
	int i=0;
	int j=0;
	int n; 
	printf("Enter the number of rows:\n");
		scanf("%d", &n);
		for(i=0; i<=n; i++){
			for(j=0; j<=n; i++){
				if(j<=i){
					printf("*");
				}
			}
		}
		for(i=0; i<=n; i++){
			for(j=0; j<=n; i++){
				if(j>=i){
					printf("*");
				}
			}
		}
	

	return 0;
}