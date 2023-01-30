#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//retrutning struct from function
struct student

{
    char name[50];
    int age;
};

// function prototype
struct student getInformation();

int main(int argc, char *argv[]) {
	 struct student s;

    s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);
	return 0;
}
struct student getInformation(){
	struct student s1;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);
  
  return s1;
}
