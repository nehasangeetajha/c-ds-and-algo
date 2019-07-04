#include<iostream>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int i,j;
    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            char c = 'A' + n - 1;
            char start= c - i + 1;
            char ch= start + j - 1 ;
            cout << ch;
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}


int main()
{
	int n;
	cin>>n;
	printPatt(n);
	return 0;
}

