#include<stdio.h>
#include<conio.h>
int n;
int binary(int a[10], int key){
	int low, high, mid;
	low=0; 
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(key==a[mid])
			return mid;
		else if(key < mid)
			high = mid-1;
		else
			low = mid+1;		
	}
	return -1;
}
void main(){
	
	int a[10],flag, key, i;
	printf("Enter the size of array : \n");
	scanf("%d", &n);
	printf("Enter the elements of array : \n");
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("Enter the number you want to search : \n");
	scanf("%d", &key);
	flag=binary(a, key);
	if(flag==-1)
		printf("Number not found");
	else
		printf("%d is found at %d location ", key, flag+1);
	getch();
}
