#include<stdio.h>
#include <time.h>
void delay()
{
    for(int i=0; i<10000000;i++)
    {
    }
}
void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
      delay();

   }
}

int main(){
   int i, n, number[25];
   int rand(void);
   clock_t start,end;
   double timetaken;

   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);
   
    printf("Entering array of random elements:");
  
  for(i=0;i<n;i++)
    number[i]=rand() % 2000 + 1;
  printf("unsorted array\n");
  for(i=0;i<n;i++)
    printf("%d ",number[i]);
    printf("\n\n");

  start=clock();  
   quicksort(number,0,n-1);
  end=clock();
   



   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",number[i]);
      
       timetaken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\ntime taken = %f seconds",timetaken);

   return 0;
}