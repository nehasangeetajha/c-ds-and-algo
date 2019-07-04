#include <iostream>
using namespace std;

// arr - input array
// n - size of array
void BubbleSort(int arr[], int n){
	// Write your code here
    int j;
    for(int j =0;j<n;j++)
    {
      for(int i =0;i<n-1;i++)
    {
        while(arr[i+1] < arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    }

}



int main(){

	int size;
	cin>>size;

	int * input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	BubbleSort(input,size);

	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";

}

