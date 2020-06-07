#include<stdio.h>
main()
{
	int i,n,arr[1000],j,max,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%D",&arr[i]);
	max=arr[0];
	for(i=0;i<n;i++)
	
	{
		if(arr[i]>max)
		{
			j=max;
			max=-arr[i];
			arr[i]=j;
		}
		if(arr[i] == max)
		l++;
	}
	printf("%d",l);
}
