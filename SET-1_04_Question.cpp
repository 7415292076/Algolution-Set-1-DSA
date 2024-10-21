/*
4.	Write a program that takes 7 integers as input from the user 
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    for(int i=0; i<7; i++)
    {
     cout<<"enter "<<i<<" values:-  ";
     cin>>arr[i];
    }
    for(int i=6; i>=0; i--)
    {
    cout<<arr[i]<<" ";
    }
}
