#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int  isPrime(int number){
	int counter = 0 , i;
	for(i = 1; i <= number; i++){
		if(number%i == 0){
			counter++;
		}
	}
	if(counter == 2){
	return 1;
	}else{
		return 0;
	}
}

int nnthPrime(int number){
    int primeCounter;
    int i=0;
    while(primeCounter != number){
    	if(isPrime(i) == 1){
//    		printf("The number %d is a prime number" , i);
    		primeCounter++;
    		if(primeCounter == number){
    			break;
			}else{
				i++;
			}
		}else{
//			printf("There is no prime number");
			i++;
			continue;
		}
	}
	
	printf("the prime number number %d is %d" , number , i);
}

int main(int argc, char *argv[]) {
	int i;
   for(i=0; i<10; i--){
   	  int testNumber , restart=0;
	printf("enter the number n:");
	scanf("%d",&testNumber);
     nnthPrime(testNumber);
     
     printf("\nDo you want to test again?? \n");
     printf("Enter 1 to continue or 0 to end!! \n");
     scanf("%d" , &restart);
     if(restart == 0){
     	break;
	 }else{
	 	continue;
	 }
	return 0;
   }
}
