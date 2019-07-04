#include <iostream>

using namespace std;

int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }

    int i = 0,j=0,wave =1;
    while(j<col)
    {
        if(wave == 1)
        {
            for(i = 0;i<row;i++)
            {
                cout << input[i][j] << " ";
                j++;
                wave = 0;
            }
        }
        else
        {
            for(i = row -1;i>=0;i--)
            {
                cout << input[i][j] << " ";
                j++;
                wave = 1;
            }
        }
    }
}
