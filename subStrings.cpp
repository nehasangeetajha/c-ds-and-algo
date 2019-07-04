#include<iostream>
using namespace std;

void printSubstrings(char str[]){
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */
    for(int start = 0;str[start] !='\0';start++)
    {
      for(int i = 0;str[i]!='\0';i++)
    {
        for(int j = start;j<=i;j++)
        {
            cout << str[j];
        }
        cout << endl;
    }
    }

}



int main(){

  char str[10000];
  cin.getline(str,10000);

  printSubstrings(str);
}


