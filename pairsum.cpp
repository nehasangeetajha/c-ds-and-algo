#include <iostream>
using namespace std;
#include<climits>

void pairSum(int input[], int size, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */
    int i,j,large,small;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(i!=j){
            if(input[i] + input[j] == x)
            {
                if(input[i] > input [j])
                {
                    large = input[i];
                    small = input[j];
                }
                else{
                    large = input[j];
                    small = input[i];}
                cout << small << " " << large << endl;
            }
            }
            else
                continue;
        }
    }
}


int main() {

	int size;
	int x;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];
	cin>>x;
	pairSum(input,size,x);

	return 0;
}

