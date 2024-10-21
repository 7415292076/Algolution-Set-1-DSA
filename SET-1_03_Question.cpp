/*
3.	Write a program to merge two sorted arrays to a third array.
*/
#include <iostream>
using namespace std;
int main() {
   int temp,j=0;
   int arr1[]= {3,4,5,1,2};
   int arr2[] = {11,18,12,27,15};
   int arr3[5];
   for(int i=0; i<10; i++)
   {
       if(i<5)
       {
           arr3[i]= arr1[i];
       }
       else
       {
           
           arr3[i]=arr2[j];
           j++;
       }
   }
  for(int i=0 ; i<10; i++)
  {
     for(int j=0; j<10; j++)
     {
         if(arr3[i]<arr3[j])
         {
            temp = arr3[i];
            arr3[i] = arr3[j];
            arr3[j] = temp;
         }
         else
         {
             
         }
     }
  }
   for(int i=0; i<10; i++)
   {
       cout<<arr3[i]<<"  ";
   }
   
}
