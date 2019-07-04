#include<iostream>
using namespace std;

int main()
{
    int i,N;
    cin >> N;
    i=1;
    while (i<=N)
    {
        int j=1;
        while (j<=N){
            cout << N-j+1;
            j++;
        }
        cout << endl;
        i=i+1;
    }
}
