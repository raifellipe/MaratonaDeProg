#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int main()
{
    long int N;

    while(cin>>N)
    {
        char lista[N][250],listau[N][250];
        for(int i=0; i<N; i++)
        {
            cin>>lista[i];
            strcpy(listau[i],lista[i]);
        }
        int d=strlen(lista[0]),t;
        int c=0;
        for (int k=1; k<N; k++){
                t=k;
        for(int j=0; j<t; j++)
            {
                if(j!=k)
                for(int i=0; i<d; i++)
                    {

                        if(lista[j][i]==lista[k][i])
                        {
                            listau[k][i]='n';
                        }
                        else
                            break;

                    }
            }
    }

    for (int j=0; j<N; j++)
    {
        for (int i=0; i<d; i++)
            {
            if(listau[j][i]=='n')
               c++;
            }
    }
    cout<<c<<endl;
    }
    return 0;
}
