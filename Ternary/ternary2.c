#include<stdio.h>
int main(){
	int a;
	char *num;
	printf("Enter a number : \n");
	scanf("%d", &a);
	num = (( a %2==0)? "Even" : "Odd");
	printf("Number is %s \n", num);
	return(0);
}
