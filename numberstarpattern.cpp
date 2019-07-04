#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin >> n;
    int i,j,k;
    int x=n;
    for(i=n;i>=1;i--,x--)
    {

    for(j = 1; j <n; j++)
    {
        if (j >= x)
        {
            if(j==x)
            {
                cout << j;
            }
            cout << "*";
        }
        else
        {
            cout << j;
        }
    }
if(j==n && j==x)
{
    cout <<j;
}
    for(int k = n; k > 0; k--)
    {
        if (k > x)
        {
            cout <<"*";
        }
        else
        {
            cout << k;
        }
    }
    cout << endl;
}
}




 /* for(j =1 ; j<=i;j++)
        {
            cout << j;
        }

        for(k=2*i -1;k>=2*i;k++)
        {
            cout << "*" ;
        }

        for(j=i;j>=1;j--)
        {
            cout << j;
        }
        cout << endl;
    } */
