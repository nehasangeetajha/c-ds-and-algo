#include <iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){

    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Save the merged array in ans[] array passed as argument.
     * Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
    int i,j,k;
  for (i = 0; i < size1 + size2;) {
    while(j < size1 && k < size2) {
      if (arr1[j] < arr2[k]) {
        ans[i] = arr1[j];
        j++;
      }
      else {
        ans[i] = arr2[k];
        k++;
      }
      i++;
    }


}
}


int main(){
  int size1;
  cin >> size1;
  int* arr1 = new int[size1];
  for(int i = 0; i < size1; i++){
    cin >> arr1[i];
  }
  int size2;
  cin >> size2;
  int* arr2 = new int[size2];
  for(int i = 0; i < size2; i++){
    cin >> arr2[i];
  }

  int* ans = new int[size1 + size2];

  merge(arr1, size1, arr2, size2, ans);

  for(int i = 0; i < size1 + size2; i++){
			cout << ans[i] <<  " ";
		}
  delete arr1;
  delete arr2;
  delete ans;
}



