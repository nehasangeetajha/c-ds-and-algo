#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int N;
    cin >> N;
    int i, j , val,k;
    i=1;
    val=1;

    while (i<=N)
    { val = i;
        j=1;
        k=1;
        while (j<=i)
        {
            while (k<= N-i)
            {
                cout << " ";
                k = k + 1;
            }
            cout << val ;
            val = val + 1 ;
            j= j + 1;
        }
        cout << endl;
     i = i+1;
    }
}


