#include<stdio.h>

void quicksort(int array[20],int start, int end)
{
  int i, j, pivot, temp;
  
  if(start<end)
   {
     pivot=start;
     i=start;
     j=end;
      while(i<j)
      {
        while(array[i]<=array[pivot]&&i<end)
        i++;
        while(array[j]>array[pivot])
        j--;
       if(i<j)
        {
          temp=array[i];
          array[i]=array[j];
          array[j]=temp;
        } 
      }
  temp=array[pivot];
  array[pivot]=array[j];
  array[j]=temp;
  quicksort(array,start,j-1);
  quicksort(array,j+1,end);
 }
}

int main()
{
 int i, n, array[20];
 printf("Enter total no of elements ");
 scanf("%d",&n);
 printf("Enter %d elements: ", n);
 for(i=0;i<n;i++)
 scanf("%d",&array[i]);
  
 quicksort(array,0,n-1);
  
 printf("Sorted elements are ");
 for(i=0;i<n;i++)
 printf(" %d",array[i]);
 return 0;
}
