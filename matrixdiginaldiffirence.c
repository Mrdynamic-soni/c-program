#include<stdio.h>
int main()
{
    int n, arr[100][100],i,j,sum1=0,sum2=0,diff=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf(" %d",&arr[i][j]);
            if(i==j)
            sum1+=arr[i][j];
        }
        printf("\n");
    }
    for(j=0;j<n;j++)
    sum2+=arr[j][n-1-j];
    printf("%d\n%d",sum1,sum2);
    diff = sum1-sum2;
    printf("\n%d",diff);
}
