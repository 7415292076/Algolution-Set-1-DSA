/*
2.	Write a program that takes 5 integers as input from the user and print Max of all the numbers.
*/

#include <iostream>
using namespace std;
int main() {
   int max;
   int arr[5];
   cout<<"\nEnter Value of array ..\n";
   for(int i = 0 ; i<5 ; i++)
   {
       cout<<"Enter value of "<< i <<" index ";
       cin>>arr[i];
   }
    max=arr[0];
    for(int i = 1 ; i<5 ; i++)
   {
      if(max < arr[i])
      {
          max = arr[i];
      }
      else
      {
          
      }
   }
   cout<<"The maximum number of ARAY is "<< max;
   }


