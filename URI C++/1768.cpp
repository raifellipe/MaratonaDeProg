#include <iostream>
using namespace std;

void imprimespaco(void);
void imprimeast(void);
void arvere(int N);
int main()
{
    int N;
    int aux1,aux2,aux3;
    while(cin>>N)
    {
     arvere(N);
    }
    return 0;
}
void imprimespaco(void)
{
    cout<<" ";
}
void imprimeast(void)
{
    cout<<"*";
}
void arvere(int N)
{
    int a, b, c, d=2, e;
    b=c=a=(N+1)/2;
    while(c>0)
    {
        for (int i=1; i<=b; i++)
        {
            if((i<c)||(i>b))
                imprimespaco();
            else
                imprimeast();
        }
        cout<<endl;
        c--;
        b++;
    }
    c=b=a;
    while(d>0)
    {
        for (int i=1; i<=b; i++)
        {
            if((i<c)||(i>b))
                imprimespaco();
            else
                imprimeast();
        }
        cout<<endl;
        c--;
        b++;
        d--;
    }
    if(d==0)
        cout<<endl;
}
