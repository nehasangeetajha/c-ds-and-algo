
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void findJumps(int, int);
//Position this line where user code will be pasted.
int main(){

    int t;
    cin >> t;

    while(t--){
        long long N, X;
        cin >> N >> X;

        findJumps(N, X);
    }

    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
void findJumps(int n, int p){

    // Your code here
    if(n % 2 != 0){
            if(p%2 == 0){
                cout << min((((p-1)/2)+1), ((n-p)/2));
            }
            else
            cout << min(((p-1)/2), ((n-p)/2));
        }
        else{
            if(p%2 == 0){
                cout << min(((p-1)/2)+1, ((n-p)/2));
            }
            else
            cout << min((p-1)/2, ((n-p)/2+1));
        }
    cout << endl;

}
