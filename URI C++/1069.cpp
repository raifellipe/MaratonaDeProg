#include <iostream>
#include <stack>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char A[1000];
     int cont=0;
    stack <char> D;
    int N,c;
    cin>>N;

    for (int a=0; a<N; a++)
    {
        while(!D.empty())
        {
            D.pop();
        }
        cin>>A;
        c=strlen(A);
        cont=0;
        for (int i=0; i<c; i++)
        {

            if(A[i]=='<')
            {
               D.push('<');
            }
            else if (A[i]=='>')
            {
                if(!D.empty()){
                    D.pop();
                    cont++;
            }
            }
        }
        cout << cont<<endl;
    }
}