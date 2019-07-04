#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,c;
    cin >> n >> c;
    int sum=0;
    int prod=1;
    if (c == 1)
    {
      for(int i=1;i<=n;i++)
      {
          sum +=i;
      }
        cout << sum;
    }
    else if (c==2)
    {
        for(int j=1;j<=n;j++)
        {
            prod *=j;
        }
        cout << prod;
    }
    else
        cout << "-1" << endl;
}
