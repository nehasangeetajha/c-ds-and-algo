#include<string.h>
void merge(int input[],int si,int mid,int ei)
{
  int i=si,j=mid+1,k=0;
  int size=ei-si+1;
  int ans[size];
  
  while(i<=mid&&j<=ei)
  {
    
        if(input[i]>input[j])
        {
            ans[k]=input[j];
            j++;
            k++;
        }
         else
        {
            ans[k]=input[i];
            i++;
            k++;
        }
  }
  
  
  while(i<=mid){
        
         ans[k]=input[i];
            i++;
            k++;
        
    }
     while(j<=ei){
        
         ans[k]=input[j];
            j++;
            k++;
        
    }
for(int t=ei;t>=si;t--)
{
  input[t]=ans[k-1];
  k--;
}
  
  
  
}

void help(int input[],int si,int ei)
{
    if(si >= ei)
        return;
    int mid = (si+ei)/2;
    help(input,si,mid);
    help(input,mid+1,ei);
    merge(input,si,mid,ei);
}


void mergeSort(int input[], int size){
	// Write your code here
    int si = 0;
    int ei = size-1;
    help(input,si,ei);
        
}
#include <iostream>
using namespace std;

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
