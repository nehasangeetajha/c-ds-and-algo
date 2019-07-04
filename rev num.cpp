/*#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,rev=0;
    cin >> n;
    while (n!=0)
    {
        rev = rev * 10;
        rev = rev + (n%10);
        n = n/10;
    }
    cout << rev;


}


// input - given string
// Update in the given input itself. No need to return or print anything
#include<string.h>
#include <iostream>
using namespace std;
void reverse(char input[],int i , int j)
{
    char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
}

void reverseEachWord(char input[]) {
    // Write your code here
    int end,start,i=0;int len;
    len = strlen(input);
    while(i<len)
    {
        if(input[i] = ' ')
        {
            end = i-1;
             reverse(input,start,end);
            start = i+1;
        }
    i++;
    }
    end=i-1;

}
#include <iostream>
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseEachWord(input);
    cout << input << endl;
}


*/


void reverse(char input[],int i,int j)
{
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }


}
#include<string.h>
void reverseEachWord(char input[]) {
    // Write your code here

    int i = 0;
    int j = 0;
    int end= 0;
    int start = 0;
    int len=strlen(input);
    while(i<len)
    {
        if(input[i] == ' ' )
        {
            end = i-1;
            reverse(input,start,end);
            start = i+1;
        }
    i++;
    }
    end=i-1;

    reverse(input,start,end);
}


#include <iostream>
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseEachWord(input);
    cout << input << endl;
}
