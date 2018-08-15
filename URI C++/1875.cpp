#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int C,P;
    int contb,contg,contr;
    char M,S;
    cin>>C;
    while (C>0)
    {
        contb=contg=contr=0;
        cin>>P;
        for (int i=0; i<P; i++)
        {

            cin>>M>>S;
            if (M=='G'&&S=='R')
            {
                contg=contg+1;
            }
            else if (M=='G'&&S=='B')
            {
                contg=contg+2;
            }
            else if (M=='B'&&S=='R')
            {
                contb=contb+2;
            }
            else if (M=='B'&&S=='G')
            {
                contb=contb+1;
            }
            else if (M=='R'&&S=='B')
            {
                contr=contr+1;
            }
            else if (M=='R'&&S=='G')
            {
                contr=contr+2;
            }
        }
        if((contb>contg)&&(contb>contr))
            cout<<"blue"<<endl;
        else if((contg>contb)&&(contg>contr))
            cout<<"green"<<endl;
        else if((contr>contb)&&(contr>contg))
            cout<<"red"<<endl;
        else if((contb==contg)&&(contb==contr))
            cout<<"trempate"<<endl;
        else if((contb==contg)||(contb==contr)||(contr==contg))
            cout<<"empate"<<endl;
        C--;
    }
    return 0;
}