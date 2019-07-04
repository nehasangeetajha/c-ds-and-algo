// input1 - first array
// size1 - size of first array
// input2 - second array
// size2 - size of second array
// output - array in which sum is to be stored

void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. Just fill the output in given output array.
     * Taking input and printing output is handled automatically.
     */
    int carry = 0;
    int k;
    int j = size2 - 1;
    if(size1 > size2){
        k = size1+1;
    }
    else
    {
        k = size2 +1;
    }
    for(int i = size1 - 1;i--;i>=0)
    {
        int num = input1[i] + input2[j] + carry;
        carry = num / 10;
        output[k] = num % 10 ;
        j--;
        k--;
    }

}


#include <iostream>
using namespace std;

int main(){
	int size1,size2;
	cin>>size1;
	int * input1=new int[1+size1];

	for(int i=0;i<size1;i++)
		cin>>input1[i];

   	 cin>>size2;
	 int * input2=new int[1+size2];

	for(int i=0;i<size2;i++)
		cin>>input2[i];

	int *output=new int[1+max(size1,size2)];
	int outsize = 1+max(size1,size2);
	sumOfTwoArrays(input1,size1,input2,size2,output);

	for(int i=0;i<outsize;i++)
		cout<<output[i]<<" ";


}

