#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int n;

void bubble_Sort(int arr[])
{
  int i, j;
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}


void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int choice,i;
  double st,bt;
  clock_t start, end;
  int array[n],array1[n];

    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
     {
      array[i]= rand ()%200;
      array1[i]=array[i];
      printf("%d ", array[i]);
     }
    printf("\n");
    
    start = clock();
  bubble_Sort(array1);
  end = clock();
  bt = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Sorted array is : ");
  for (i = 0; i < n; i++)
  {
      printf("%d ", array1[i]);
  }
  printf("\n");
  printf("\nTime taken by Bubble Sort : %lf\n", bt);
  printf("\n");

}