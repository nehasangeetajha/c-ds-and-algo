void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

 void SortZeroesAndOne(int *input, int size)
{
    int left = 0, right = size-1;

    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (input[left] == 0 && left < right)
            left++;

        /* Decrement right index while we see 1 at right */
        while (input[right] == 1 && left < right)
            right--;

        /* If left is smaller than right then there is a 1 at left
        and a 0 at right. Exchange arr[left] and arr[right]*/
        if (left < right)
        {
            input[left] = 0;
            input[right] = 1;
            left++;
            right--;
        }
    }
}


#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	SortZeroesAndOne(input,size);

	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;
}

