#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,n,ans=1;
	cout << "enter number" << endl;
    cin >> x >> n;
    while (n!=0)
    {
        ans = ans*x;
        n= n -1;
    }
    cout << ans << endl;
}
