#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int n;

void selection_sort(int arr[])
{
	int i, j, min;
	for(i=0;i<n;i++)
	{
		min= i;
		for(j = i+1; j < n; j++)
			if (arr[j] < arr[min])
            min= j;
  
        swap(&arr[min], &arr[i]);
	}
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
    
    start=clock();
    selection_sort(array);
    end = clock();
    st = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Sorted array is - ");
    for (i = 0; i < n; i++)
     {
      printf("%d ", array[i]);
     }
    printf("\nTime taken by Selection Sort : %lf\n", st);


}