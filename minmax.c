  int i,j,k,sum1=0,sum2=0;
  for(i=0;i<5;i++)
  {
      for(j=i+1;j<5;j++)
      {
          if(arr[i]>arr[j])
          {
              k=arr[i];
              arr[i]=arr[j];
              arr[j]=k;
          }
      }
  }
  for(i=0;i<4;i++)
  sum1+=arr[i];
  for(i=1;i<5;i++)
  sum2+=arr[j];
  return (sum1 sum2);
}
main()
{
    int i,func;
    int *arr =(int* )malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    scanf("%d",(arr+i));
    func = minmax(arr);
    printf("%d",func);
    free(arr);
}
