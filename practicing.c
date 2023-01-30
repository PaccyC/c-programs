#include <stdio.h>
#include <stdlib.h>
#define MAX 50


	int main(){
		
//	int i, j, count;
//
//   for(i = 1; i <= 10; i++) {
//      for(j = i; j <= 100; j += 10 )
//      printf(" %3d", j);
//
//      printf("\n");
//   }
//int i,j;
//for(i=2;i<100;i++){
//	for(j=2;j<=(i/j);j++){
//		if(j>(i/j)){
//			printf("%d is prime \n",i);
//		}
//	}
//}
//  
// int i, j;
//   
//   for(i = 2; i<100; i++) {
//
//      for(j = 2; j <= (i/j); j++) 
//      if((i%j)) break; // if factor found, not prime
//      if(j > (i/j)) printf("%d \n", i);
//   } 
//addition of matrices
int i,j,matA[3][3],matB[3][3],res[3][3];
printf("Enter matrixA:\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&matA[i][j]);
printf("Enter matrix B:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&matB[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
res[i][j]=matA[i][j]+matB[i][j];
printf("\n\nResultant Matrix:\n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d\t",res[i][j]);
	}
	printf("\n");
}
//printing patterns
//int x;
//int y;
//	for(x=0;x<5;x++){
//		for(y=0;y<5-x;y++){
//			printf("*");
//			
//		}
//		printf("\n");
//	}
//	
//int i,j,n;
//printf("Enter a value:");
//scanf("%d",&n);
//for (i=0;i<n;i++){
//	for(j=0;j<n;j++){
//		if((i<=j && (i+j)<=n-1)||(i>=j && (i+j)>=n-1))
//			printf("*");
//		
//			else
//			printf(" ");
//		}
//		printf("\n");
//	
//}
//multiplication of matrices
int a[MAX] [MAX],b[MAX] [MAX];
//int i,j ,k;
//int arows,acolumns,brows,bcolumns;
//
//int product[MAX][MAX];
//int sum=0;
//printf("Enter the rows and columns of the matrix a:");
//scanf("%d %d",&arows,&acolumns);
//printf("Enter the elements of matrix a:\n");
//for(i=0;i<arows;i++){
//	for (j=0;j<acolumns;j++){
//		scanf("%d",&a[i][j]);
//	}
//}
//
//printf("Enter the number of rows and columns of matrixb:");
//scanf("%d %d",&brows,&bcolumns);
//if(brows !=acolumns){
//	printf("sorry!We cannot multiply the matrices a and b");
//}
//else{
//	printf("Enter the elements of matrix b:\n");
//
//for(i=0;i<brows;i++){
//	for(j=0;j<bcolumns;j++){
//		scanf("%d",&b[i][j]);
//	}
//}
//}
//printf("\n");
//for(i=0;i<arows;i++){
//	for(j=0;j<bcolumns;j++){
//		for(k=0;k<brows;k++){
//			sum +=a[i][k] *b[k][j];
//		}
//		product[i][j]=sum;
//		sum=0;
//	}
//}
//printf("Resultant matrix\n");
//for(i=0;i<arows;i++){
//	for(j=0;j<bcolumns;j++){
//	printf("%d",product[i][j]);
//	}
//	printf("\n");
//}
//
return 0;
	}


