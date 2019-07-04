#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    char c;
    int count=0;
    int small=0;
    int digits=0;
    while (c!='$')
    {
        c = cin.get();
        if(c >= 'a' && c <= 'z')
        {
            small++;
        }
        else if(c>='0' && c<='9')
        {
            digits++;
        }
        else if(c==' ' || c=='\n'|| c=='\t')
        {
            count++;
        }
    }
    cout << small << " "<< digits << " " << count << endl;

}
