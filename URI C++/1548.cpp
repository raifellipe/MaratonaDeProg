#include <iostream>
#include <algorithm>
using namespace std;
bool c(int a, int b){return(b<a);}
int main()
{
    int M, N;

    cin>>N;

    for(int i=0; i<N; i++)
    {
        cin>>M;
        int P[M], aux[M], cont=0;
         for(int j=0;j<M; j++)
         {
             cin>>P[j];
             aux[j]=P[j];
         }
         sort (&P[0], &P[M],c);
         for (int a=0; a<M; a++)
         {
             if (P[a]==aux[a])
               cont++;
         }

         cout<<cont<<endl;
    }
}