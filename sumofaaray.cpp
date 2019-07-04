#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;

    int array[100];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + array[i];
    }

    cout << sum << endl;

}


