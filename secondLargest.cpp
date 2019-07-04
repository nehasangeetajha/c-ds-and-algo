#include<iostream>
using namespace std;
#include <climits>


int main(){

    // Write your code here
    int n;
    cin >> n;
    int arr[100];
    for(int i= 0;i<n;i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int maxIndex;
    for(int i =1;i<n;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            maxIndex=i;
        }
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[0];
    arr[0] = temp;
    max = arr[1];
    for(int i =2;i<n;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    if(max == arr[0])
    {
        max = -2147483648;
    }
    cout << max;

}



