#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int S ,E , W;
    cin >> S >> E >> W;

    int c;
    while (S <= E){
       c = (5* (S - 32)) / 9 ;
        cout << S << " " << c << endl;
        S = S + W ;
    }

}


