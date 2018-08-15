#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct produto
{
    float pr;
    string nome;
};
int main()
{
    int N;
    cin>>N;
    while(N>0)
    {
       int M;
       cin>> M;
       produto R[M];
       for(int i=0; i<M; i++)
       {
           cin>>R[i].nome;
           cin>>R[i].pr;
       }
       int P;
       float T=0;
       cin>>P;
       produto A[P];
       for(int i=0; i<P; i++)
       {
           cin>>A[i].nome;
           cin>>A[i].pr;
       }
       for(int j=0; j<P; j++)
       {
           for(int i=0; i<M; i++)
           {
               if(A[j].nome==R[i].nome)
               {
                   T=T+(A[j].pr*R[i].pr);
               }
           }
       }
       cout<<"R$ "<<fixed<<setprecision(2)<<T<<endl;
       N--;
    }
    return 0;
}
