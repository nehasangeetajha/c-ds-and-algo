/*
#include<iostream>
using namespace std;

int main()
{

    // memory gets automatically cleared
    while(true)
    {
        int i =10;
    }

   //consumes memory and finally ends up due to loss of memory
    while(true)
    {
        int*p = new int;
    }


    int m,n;
    cin >> m >> n;
    int**p=new int*[m];
    for(int i = 0;i<m;i++)
    {
        p[i] = new int[i+1];
        for(int j = 0; j<n;j++)
        {
            cin >> p[i][j];
        }

    }



}


#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a*b

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
*/

#include<iostream>
using namespace std;

int getValue(int x = 0, int y = 0, int z){
    return (x + y + z);
}

int main(){
   cout << getValue(10);
   return 0;
}
