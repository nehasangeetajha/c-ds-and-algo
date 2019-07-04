// input1 - first input string
// input2 - second input string
#include<string.h>
#include<iostream>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int len1 = strlen(input1);
    int len2 = strlen(input2);
    int freq[256] = {0};

    if(len1 != len2)
    {
        return false;
    }
    else
    {
        for(int i = 0;i<len1 ;i++)
        {
            char ch = input1[i];
            int ascii = int(ch);
            freq[ascii]++;
        }
        for(int i = 0;i<len2;i++)
        {
            char ch = input2[i];
            int ascii = int(ch);
            freq[ascii]--;
        }

        for(int i = 0;i<256;i++)
        {
            if(freq[i] != 0)
                return false;
        }
        return true;
    }
    for(int i =0;i<256;i++)
    {
        cout << freq[i];
    }
}


#include <iostream>
using namespace std;

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}


