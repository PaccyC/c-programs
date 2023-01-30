#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	int ages[5]={15,16,35,54,43};
//	printf("%p\n",sizeof(ages));
//	printf("Sizeof():%ld\n",
//	sizeof(ages));
	
	//2d arrays
//	int A[3][3]= {{1,2,3},
//	              {2,4,5},
//	              {2,3,4}
//	                     };
//					   
//		 int B[3][3]= {{1,2,3},
//	                   {2,4,5},
//	                   {2,3,4}
//	                   
//	                     };
//					   
//	           int r,c;
//	           for(r=0;r<3;r++){
//	           	for(c=0;c<3;c++){
//	           		printf("%d",A[r][c]+B[r][c]);
//				   }
//				   printf("\n");
//			   }
	           
	        
	           
	
	
	//Dynamic memery allocation
//	int n, *ptr,sum=0,i;
//	printf("Enter the number of elements:");
//	scanf("%d",&n);
//	
//	ptr=(int *) malloc(100* sizeof(int));
//	if(ptr==NULL){
//		printf("Memory cannot be allocated");
//		exit(0);
//	}
//	printf("Enter the elements:");
//	for(i=0;i<n;i++){
//		scanf("%d",ptr+i);//same as &ptr[i];
//		sum += *ptr+i;// same as ptr[i];
//	}
//	printf("The sum is %d",sum);
//	free(ptr);
	//using cantiguous allocation
//		int n, *ptr,sum=0,i;
//	printf("Enter the number of elements:");
//	scanf("%d",&n);
//	
//	ptr=(int *) calloc(n, sizeof(int));
//	if(ptr==NULL){
//		printf("Memory cannot be allocated");
//		exit(0);
//	}
//	printf("Enter the elements:");
//	for(i=0;i<n;++i){
//		scanf("%d",&ptr[i]);//same as &ptr[i];
//		sum += (*ptr+i);// same as ptr[i];
//	}
//	printf("The sum is %d",sum);
//	free(ptr);



//Nested for looops
//program to print pascal's triangle
//
//int r,c;
//int n=1;
//for(r=0;r<10;r++){
//	for(c=0;c<10;c++){
//		if (c==0){	
//	printf("*");
//}
//else{
//	printf("*");
//}
//
//	}
//	printf("\n");
//}
char text [20];
char ages[10];
printf("Enter the ages:");
scanf("%d",&ages);
printf("%d",ages[3]);
gets(ages);
puts(ages);

	
	return 0;
}