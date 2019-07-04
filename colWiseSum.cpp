#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int m,n;
    cin>>m>>n;
    int a[100][100];

  for(int i = 0;i<m;i++)
  {
      for(int j = 0;j<n;j++)
      {
          cin >> a[i][j];
      }
  }

    for(int j=0;j<n;j++)
    {int sum = 0;
        for(int i = 0;i<m;i++)
        {
            sum+=a[i][j];
        }
     cout << sum << " ";
    }
}



