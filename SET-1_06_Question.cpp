/*
6.	Write a program to search a number (taken as input from user) in an array 
then print the index of the first occurrence of the input number in the array
If the input number is not present in the array then print -1

*/

#include <iostream>
using namespace std;

int main() {
   int n,arr[]={1,2,3,4,6,5,7,8,9,10},j=0;
   cout<<"enter a number:- ";
   cin>>n;
   for(int i=0;i<10;i++)
   {
       if(arr[i]==n)
       {
            j=i;
           
           
       }
       
   }
   if(j!=0)
   {
       cout<<n<<" is found at "<<j<<" index ";
   }
   else
   {
       cout<<"-1";
   }

    return 0;
}
