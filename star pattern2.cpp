#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int N;
    cin >> N;
    int i, j,k;
    i=1;
    while (i<=N)
    {
        j=(N-1);
        while (j >= i)
        {
            cout << " ";
            j = j-1;
        }
        k=1;
        while (k<= (2*i) -1)
        {
            cout << "*";
            k=k+1;
        }
        cout << endl;
     i = i+1;
    }
}


