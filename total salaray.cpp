#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	double bs,hra,da,allow,pf,ts;
    char g;
    cin >> bs >> g;

    hra = (20*bs) / 100 ;
    da = (50 * bs) / 100 ;
    if(g == 'A')
    {
        allow = 1700;
    }
    else if (g == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    pf = (11 * bs) / 100;

    ts = bs + hra + da + allow - pf;
    int ans = round(ts);
    cout << ans << endl;
}
