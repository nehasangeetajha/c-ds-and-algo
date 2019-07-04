#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int evenSum = 0, oddSum=0 , N , a;
    cin >> N;
    while (N != 0)
    {
        a= N%10;
        if(a % 2 == 0)
        {
            evenSum = evenSum + a;
        }
        else
        {
            oddSum = oddSum + a;
        }
        N = N / 10;
    }
    cout << evenSum << " " << oddSum << endl;
}
