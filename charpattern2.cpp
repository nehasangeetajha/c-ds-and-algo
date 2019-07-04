#include<iostream>
using namespace std;

int main()
{
    int i,j,n,val;
    cin >> n;
    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=n)
        { val = i;
            char ch= 'A' + val - 1 ;
            cout << ch ;
            j++;
            val++;
        }
        cout << endl;
        i++;
    }
}

