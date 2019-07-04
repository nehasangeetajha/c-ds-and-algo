#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int N;
    cin >> N;
    int i, j , val;
    i=1;
    val=1;

    while (i<=N)
    { val = i;
        j=1;
        while (j<=i)
        {
            cout << val ;
            val = val + 1 ;
            j= j + 1;
        }
        cout << endl;
     i = i+1;
    }
}


