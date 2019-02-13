#include<stdio.h>
#include<conio.h>
void bubble(int a[], int n){
	int i, j ;
	for(i=0; i<n; i++){
		for(j=i+1; j<n-1; j++){
			if(a[j] < a[i]){
				a[i] = a[i] + a[j] ;
				a[j] = a[i] - a[j] ;
				a[i] = a[i] - a[j] ;
			}
		}
	}
	printf("Array after sorting is : \n");
	for(i=0; i<n; i++)
	printf("%d", a[i]);
}
int main(){
	int n, a[50], i;
	printf("Enter the size of an Array : \n");
	scanf("%d", &n);
	printf("Enter the elements of Array : \n");
	for(i=0; i<n; i++)
	scanf("%d", a[i]);
	bubble(a, n);
	return 0;
}
