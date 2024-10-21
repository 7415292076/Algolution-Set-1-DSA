/*16.write a function in C to print following pattern
Note: number of rows shall be the input parameter to the function.

12345
23455
34555
45555
55555

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,count=0;
    for(i=1; i<=5; i++)
    {
        for(j=i; j<=5; j++)
        {
            count++;
            cout<<j;
        }
        j=j-1;
        if(count!=j)
        {
        while(count<=j)
        {
         cout <<j;
         count++;
        }
        }
        cout << "" << endl;
        count=0;
    }
}