#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int reverse(int);
//int main(int argc, char *argv[]) {
//	int n;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	int res;
//	res=reverse(n);
//	printf("The reversed number is %d",res);
//	return 0;
//}
//int r,sum=0;
//int reverse(int x){
//	if(x>0){
//		r=x%10;
//		sum=sum*10+r;
//		reverse(x/10);
//	}
//	else
//	return sum;
//	return sum;
//}
int main(){
	int n,temp;
	int length=0,result;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	
	while(temp!=0){
		length++;
		temp=temp/10;
	}
	result=rev(n,length);
	printf("The reversed number is %d",result);
	return 0;
}
int rev(int len,int num){
	if (len==1)
	return num;
	else
		return (((num%10)* pow(10,len-1))+ rev(num/10,--len));
	
}
