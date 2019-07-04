#include<algorithm>
#include<iostream>
using namespace std;
void findLargest(int arr[][1000], int row, int col){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */
    int maxr = 0,sumr = 0;
    int maxc = 0 , sumc = 0;
    int i ,j,k,l;
    for(i=0;i<row;i++) // row sum
    {
        for(j = 0;j<col;j++)
        {
           sumr+= arr[i][j];
            maxr = max(maxr,sumr);

        }
    }

    for(k = 0 ;k<col;k++) // col sum
    {
        for(l = 0;l<row;l++)
        {
            sumc += arr[l][k];
            maxc = max(maxc,sumc);
        }
    }
    if(maxr>maxc)
    {
        cout << "row" << " " << sumr;
    }
    else
    {
        cout << "column" << " " << sumc;
    }



}

#include<iostream>
using namespace std;


int main() {
    int row, col;
    cin >> row >> col;

    int input[1000][1000];
    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    findLargest(input, row, col);
}
