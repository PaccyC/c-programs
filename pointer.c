#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person{
	int age;
	float weight;
	char name[30];
};
int main(int argc, char *argv[]) {
	struct person *personPtr,person1;
	personPtr=&person1;
	printf("Enter the age:");
	scanf("%d",&personPtr->age);
	printf("Enter weight:");
	scanf("%f",&personPtr->weight);
	printf("Displaying:\n");
	printf("Age:%d\n",personPtr->age);
	printf("weight:%f",(*personPtr).weight);
	struct person*ptr;
	int i,n;
	printf("\nEnter the number of people\n:");
	scanf("%d",&n);
	ptr=(struct person*)malloc(n*sizeof(struct person));
	for(i=0;i<n;++i){
		printf("Enter firstname and age respectively:");
		//to access members of 1st struct person
		//ptr->name and ptr->age is used
		//to access members of 2nd struct person
		//(ptr+i)->name,&(ptr+i)->age;
		scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);
	}
	printf("displaying Information:\n");
	for(i=0;i<n;++i)
	printf("Name:%s\tAge:%d\n",(ptr)->name,(ptr+i)->age);
	
	
	
	return 0;
}
