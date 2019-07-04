#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int N, sum = 0;
    cin >> N ;
    int i=2;
    while (i <= N)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1 ;

    }
    cout << sum << endl;
}


