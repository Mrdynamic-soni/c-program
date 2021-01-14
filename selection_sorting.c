#include<stdio.h>

void show_array(int a[50], int n);        // print array
void sort_array_d(int a[50], int n);      //selection sorting(descending)
void sort_array_a(int a[50], int n);       // ascending order
void swap(int *x, int *y);                //swap
void largest_d(int a[50],int n);          //largest as well as smallest
void largest_a(int a[50],int n);

void main()
{
  int a[50];
  int n;
  int choice;
  printf("Enter the number of element in array: \n");
  scanf("%d",&n);
  printf("Enter the array: \n");

  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Entered array: ");
  show_array(a,n);

  printf("Enter whether you want (1)ascending order or (2)descending order (1/2): \n");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1: printf("\nSorted array: ");
            sort_array_a(a,n);
            show_array(a,n);
            largest_a(a,n);
            break;
    case 2: printf("\nSorted array: ");
            sort_array_d(a,n);
            show_array(a,n);
            largest_d(a,n);
            break;
    default: printf("Wrong choice!");
  }
}

void show_array(int a[50], int n)
{
  for(int i=0; i<n; i++)
  {
    printf(" %d ",a[i]);
  }
  printf("\n");
}

void sort_array_d(int a[50], int n)
{
  int min;

  for(int i=0; i<n-1; i++)
  {
    min=i;
    for(int j=i+1; j<n; j++)
    {
      if(a[j]>a[min])
        min=j;
    }
    swap(&a[min], &a[i]);
  }
}

void sort_array_a(int a[50], int n)
{
  int min;

  for(int i=0; i<n-1; i++)
  {
    min=i;
    for(int j=i+1; j<n; j++)
    {
      if(a[j]<a[min])
        min=j;
    }
    swap(&a[min], &a[i]);
  }
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void largest_d(int a[50],int n)
{
  printf("The largest number is: %d \n", a[0]);
  printf("The smallest number is: %d \n", a[n-1]);
}

void largest_a(int a[50],int n)
{
  printf("The largest number is: %d \n", a[n-1]);
  printf("The smallest number is: %d \n", a[0]);
}
