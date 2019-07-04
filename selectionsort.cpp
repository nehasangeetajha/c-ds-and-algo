#include <iostream>
using namespace std;

void selectionSort(int input[] , int n)
{
    for(int i = 0 ; i< n-1 ; i++)
    {
        int min = input[i] ;
        int minIndex = i;
        for(int j= i+1 ; j<n;j++)
        {
            if(min > input[j])
            {
                min = input[j];
                minIndex = j;
            }
        }
        int temp = input[i];
        input [i] = input[minIndex];
        input[minIndex] = temp;
    }
}

int main()
{
    int input[5] = {1,3,8,2,0};
    selectionSort(input,5);
    for(int i =0;i<5;i++)
    {
        cout << input[i];
    }

}
