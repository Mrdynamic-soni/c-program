#include<stdio.h>
int grade(int *arr,int n)
{
  int i,j,k,l;
  for(i=0;i<n;i++)
  {
      if(arr[i]>=37 && arr[i]<=100)
      {
          if(arr[i]%5 == 0)
          printf("%d\n",arr[i]);
          else
          {
              j=arr[i]%5;
              if(j<=2)
              printf("%d\n",arr[i]);
              else if(j==3)
              printf("%d\n",arr[i]+2);
              else 
              printf("%d\n",arr[i]+1);
          }
      }
      else 
      printf("%d\n",arr[i]);
  }
  return grade;
}
int main()
{
    int n,i,j,k,student;
    scanf("%d",&n);
    int* arr= (int*)malloc(n* sizeof(n));
    for(i=0;i<n;i++)
    scanf("%d",(arr+i));
    student = grade(arr,n);
    free(arr);
}
