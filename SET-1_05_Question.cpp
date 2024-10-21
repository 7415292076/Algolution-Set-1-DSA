/*
5.	Write a program that takes 5 integers as input from the user 
and finds out if the order of numbers in array is palindrome
e.g. 
if input numbers are 44 56 56 44 then the array is in palindrome order
if input numbers are 44 53 156 44 then the array is not in palindrome order.

*/

#include <iostream>
using namespace std;

int main() {
   int arr[]={1,2,3,4,6,5,7,8,9,10,1,2,3,4,6,5,7,8,9,10},j=0;
  
   for(int i=0;i<20;i++)
   {
        for(int k =i; k<20; k++)
        {
             if(arr[i]==arr[i])
              {
                   j++;
              }
              else
              {
                  
              }
        }
      
       
   }
   cout<<"total dublicate number is "<<j;
}
   
