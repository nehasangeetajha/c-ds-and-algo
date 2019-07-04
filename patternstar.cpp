#include<iostream>
using namespace std;

int main()
{
    int i,N,k;
    cin >> N;
    i=1;
    k=1;
    while (i<=N)
    {
        int j=1;
        while (j<=i){
            cout << k;
            k++;
            j++;
        }
        cout << endl;
        i=i+1;
    }
}

