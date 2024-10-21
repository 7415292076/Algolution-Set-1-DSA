/*
1.	Write a program to count total number of negative numbers in an array.
*/
#include <iostream>
using namespace std;
int main() {
   int n ;
   int j=0;
   cout<<"Enter Size of array ";
   cin>>n;
   int arr[n];
   cout<<"\nEnter Value of array ..\n";
   for(int i = 0 ; i<n ; i++)
   {
       cout<<"Enter value of "<< i <<" index ";
       cin>>arr[i];
   }
   
   for(int i = 0 ; i<n ; i++)
   {
       if(arr[i]<0)
       {
         j++; 
       }
   }
   cout<<"\nTotal number of nagative number in an array is "<<j;
}
