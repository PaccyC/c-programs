#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

	
	
	int main(int argc, char *argv[]){
	
//	int n;
//	int i;
//	float sum=0.0,num[100],avg;
//	
//	printf("Enter the number of elements:");
//	scanf("%d",&n);
//	while(n>100 || n<1){
//		printf("The numbers you entered are too many or you have entered no number");
//		printf("Enter the number again:");
//		scanf("%d",&n);
//	}
//	
//	for(i=0;i<n;++i){
//		printf("%d.Enter the number:", i+1 );
//		scanf("%f",&num[i]);
//		sum += num[i];
//	}
//    printf("sum=%f",sum);
//    avg=sum/n;
//    printf("\naverage=%f",avg);
//finding the largest element of an array
int n,i;
double num[100];
printf("Enter the number of elements:");
scanf("%d",&n);
while(n>100 || n<1){
   printf("The numbers you entered are too many or you have entered no number");
   printf("Enter the number again:");
   scanf("%d",&n);
	              }
  for(i=0;i<n;++i){
  	printf("%d.Enter the elements:",i+1);
  	scanf("%lf",&num[i]);
  	}
  	//storing largest number to num[0]
  	for(i=1;i<n;++i){
  		if(num[0]<num[i]){
  		num[0]=num[i];
		  }
	  }
  printf("The largest element =%f",num[0]);
return 0;
	}
	
	
	
	
	
	
	











