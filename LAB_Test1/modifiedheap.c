#include <stdio.h> 
#include <time.h>
int temp;  

void delay(){
	for (int i=0;i<10000000;i++){
	}
} 

void heapify(int arr[], int size, int i)  
{  
int smallest = i;    
int left = 2*i + 1;    
int right = 2*i + 2;    
  
if (left < size && arr[left] <arr[smallest])  
smallest = left;  
  
if (right < size && arr[right] < arr[smallest])  
smallest= right;  
  
if (smallest != i)  
{  
    temp = arr[i];  
    arr[i]= arr[smallest];   
    arr[smallest] = temp;  
heapify(arr, size, smallest);  
}  
}  
  
void heapSort(int arr[], int size)  
{  
int i;  
for (i = size / 2 - 1; i >= 0; i--)  
heapify(arr, size, i);  
for (i=size-1; i>=0; i--)  
{  
temp = arr[0];  
    arr[0]= arr[i];   
    arr[i] = temp;  
heapify(arr, i, 0);  
}  
delay();
}  
  
int main()
{
    clock_t start,end;
    double timetaken;
    int rand(void);
    
    int n,i;
    printf("Enter the total elements ");
    scanf("%d", &n);
    int arr[n];
    printf("\nThe array elements\n");
    for (i = 0; i < n; i++)
    {
        arr[i]=rand();
        printf("%d\t",arr[i]);
    }
    start=clock();
	heapSort(arr, n);  

    printf("\n");
	printf("printing sorted elements\n");  
	for (i=0; i<n; ++i)  
	printf("%d\t",arr[i]); 

	end=clock();
	timetaken=((double)(end-start))/CLOCKS_PER_SEC;
	printf("\nTime taken = %f",timetaken);
	return 0;
}