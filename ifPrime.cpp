#include <iostream>
using namespace std;

bool ifPrime(int n)
{
    int d=2;
    while (d<n)
    {
        if(n % d == 0){
            return false;
        }
            d++;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    /* to check one number prime
    bool ans = ifPrime(n);
    cout << ans << endl; */

    /*for numbers prime upto n */
    for(int x=2;x<=n;x++)
    {
        if(ifPrime(x))
            cout << x << endl;
        else
            continue;
    }
}

