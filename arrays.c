#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

//  int marks[10], i, n, sum = 0;
//  double average;
//
//  printf("Enter number of elements: ");
//  scanf("%d", &n);
//
//  for(i=0; i < n; ++i) {
//    printf("Enter number%d: ",i+1);
//    scanf("%d", &marks[i]);
//          
//    // adding integers entered by the user to the sum variable
//    sum += marks[i];
//  }
//
//  // explicitly convert sum to double
//  // then calculate average
//  average = (double) sum / n;
//
//  printf("Average = %.2lf", average);
//  // C program to store temperature of two cities of a week and display it.
//#include <stdio.h>
////multidimensional arrays
//const int CITY = 2;
//const int WEEK = 7;
//
//  int temperature[CITY][WEEK];
//
//  // Using nested loop to store values in a 2d array
//  int x,j;
//  for ( x = 0; x < CITY; ++x)
//  {
//    for ( j = 0; j < WEEK; ++j)
//    {
//      printf("City %d, Day %d: ", x + 1, j + 1);
//      scanf("%d", &temperature[i][j]);
//    }
//  }
//  printf("\nDisplaying values: \n\n");

  // Using nested loop to display vlues of a 2d array
//  for ( x= 0; x < CITY; ++x)
//  {
//    for ( j = 0; j < WEEK; ++j)
//    {
//      printf("City %d, Day %d = %d\n", x , j , temperature[x][j]);
//    }
//  }

int A[3][3]= {{1,2,3},
	          {2,4,5},
	         {2,3,4}
	                     };
					   
		 int B[3][3]= {{1,2,3},
	                   {2,4,5},
	                   {2,3,4}
	                   
	                     };
					   
	           int r , c;
	           for(r=0;r<3;r++){
	           	for(c=0;c<3;c++){
	           		printf("%d ",A[r][c]+B[r][c]);
				   }
				   printf("\n");
			   }
	           
	return 0;
}
