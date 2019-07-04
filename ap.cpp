#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x;
    cin >> x;
    int count =1;
    int n=1;
    int num;
    while (x>=count)
    {
        num= 3*n +2;
        if(num%4 !=0)
        {
            cout << num << " ";
            count++;
        }

        n++;

    }
}
