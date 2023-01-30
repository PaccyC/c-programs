#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matrix[2][3]={{1,4,2},
	                  {3,6,8}};
	printf("%d",matrix[0][2]);
	matrix[1][1]=54;
	prntf("%d",matrix[1][1]);
	return 0;
}
