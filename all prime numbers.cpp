#include<iostream>
using namespace std;

int main()
{
    int i,j,n,val;
    cin >> n;
    for (i=2;i<=n;i++)
    {val=0;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                val=1;
                break;
            }

        }
         if (val == 0)
            {
                cout << i<< endl;
            }
    }
}
