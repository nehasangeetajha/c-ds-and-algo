#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=n)
        {
            char start='A' + i - 1;
            char ch= start + j - 1 ;
            cout << ch ;
            j++;
            start ++;
        }
        cout << endl;
        i++;
    }
}
