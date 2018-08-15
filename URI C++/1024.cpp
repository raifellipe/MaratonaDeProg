#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    string M;
    int N;
    cin>>N;
    int a=N;
    while(N>=0)
    {
        getline(cin, M);
        for(int i=0; i<M.size(); i++)
        {
            if(isalpha(M[i]))
            {
                M[i]=M[i]+3;
            }
        }
        reverse(M.begin(), M.end());
        for(int i=((M.size()+0.5)/2); i<M.size(); i++)
        {
            M[i]=M[i]-1;
        }
        if(N!=a)
        cout<<M<<endl;
        N--;
    }
    return 0;
}