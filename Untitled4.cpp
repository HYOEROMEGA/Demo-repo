#include<stdio.h>
int main()
{
	int n,sum =0;
	int max=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements in the array",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	} 
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(sum<0)
		{
			sum=0;
		}
		if (sum>max)
		{
			max=sum;
		}
	}
	printf("maximum sum=%d\n",max);
	printf("sum of all elements=%d\n",sum);
	return 0;
}

