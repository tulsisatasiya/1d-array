#include<stdio.h>

int main(){
	int i;
	int n;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int sum[n];

	for(i=0;i<n;i++){
		printf("Enter element of first array index-%d ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	printf("Enter element of second array index-%d ",i);
	scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		sum[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++){
		printf("%d \t",sum[i]);
	}

	return 0;
}
