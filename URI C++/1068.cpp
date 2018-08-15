#include <iostream>
#include <stack>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char A[1000];
    stack <char> D;

        fflush(stdin);
        while(cin>>A){
          int cont=0;
        while(!D.empty())
        {
            D.pop();
        }
        for (int i=0; i<strlen(A); i++)
        {

            if(A[i]=='(')
            {
               D.push('(');
            }
            else if (A[i]==')')
            {
                if(!D.empty()){
                    D.pop();
                }
                else
                    cont++;
            }
        }
        if(!D.empty()||cont!=0)
        cout <<"incorrect"<<endl;
        else
        cout <<"correct"<<endl;
        }
  return 0;
}
