#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N!=0)
    {
        int aux[N],a=0;
        char M[N][50];
        for (int i=0; i<N; i++)
        {
            cin>>M[i];
            aux[i] = strlen(M[i]);
            if(aux[i]>a)
            {
                a=aux[i];
            }
        }
        for(int r=0; r<N; r++)
        {
            int b=strlen(M[r]);
            if(b!=a)
            {
                for (int i=0; i<(a-b); i++)
                {
                    cout<<" ";
                }
                for(int i=0; i<b; i++)
                {
                    cout<<M[r][i];
                }
                cout<<endl;
            }
            else
            {
                for(int i=0; i<b; i++)
                {
                    cout<<M[r][i];
                }
                cout<<endl;
            }
        }
        cin>>N;
        if(N!=0)
        cout<<endl;
    }
    return 0;
}
