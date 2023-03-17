#include<stdio.h>

int main(){
	int i;
	int n;
	int sum=0;

	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];

	for(i=0;i<n;i++){
		printf("Enter element index-%d ",i);
		scanf("%d",&a[i]);
		sum= sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
