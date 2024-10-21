/*15.write a function in C to print following pattern 
Note: Number of rows and columns shall be the input
 parameters to the function

11111
10001
10001
10001
11111

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,count=0,k=1;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1|| i==5 || j==1 || j==5)
            { 
             cout<<k;
            }
            else{
             cout <<count;;
            }
        }
        cout << "" << endl;

    }
}
