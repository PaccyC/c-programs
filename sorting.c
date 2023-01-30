#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//1.bubble sort
	//declare an array
//	int numbers[]={5,3,2,1,4};
//	int n=5;
//	// i loop counter
//	int i=0;
//	// t =temporary variable to be used for swapping
//	int t=0;
//	//swap =a flag, 0 indicates that no swapping was done
//	// 1 indicates that swap took place
//	// default value should be 1 so that control will entr the loop
//	int swap=1;
//	while(swap==1){
//		//before comparing the elemnts, reset flag to 0
//		swap=0;
//		for(i=0;i<n-1;i++){
//		printf("%d",numbers[i]);
//			//compare if currnt element is greater than next element
//			if(numbers[i]>numbers[i+1]){
//				t=numbers[i];
//				numbers[i]=numbers[i+1];
//				numbers[i+1]=t;
//			}
//		}
//	}
//	for (int i=0;i<n;i++)
//	printf("%d,",numbers[i]);
		
	



// work to submit

     int a[]={1,3,7,9,0,2,4,5,8,6};
     int len=10;
     for(int i=0;i<len;i++){
	 for(int j=0;j<len-1;j++){
	 if(a[j]>a[j+1]){
	 int temp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=temp;
			}
	}
}
for(int i=0;i<len;i++)

printf("%d,",a[i]);
	
	return 0;
}