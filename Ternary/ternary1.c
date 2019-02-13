#include<stdio.h>
#include<conio.h>
void main(){
	int age;
	char *classification;
	printf("Enter your age : \n");
	scanf("%d", &age);
	classification = ( (age < 18) ? "Teenager" : ( age <60 ? "adult" : "Old" ));
	printf("You are %s \n ", classification);
	getch();
}
