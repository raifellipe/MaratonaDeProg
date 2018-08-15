#include <iostream>
#include <string.h>
#include <cstring>
#include <cstdio>
using namespace std;
double conta(char a)
{
    double cont;
    if(a=='W')
    {
        cont=1;
    }
    else if (a=='H')
    {
        cont=0.5;
    }
    else if (a=='Q')
    {
        cont=0.25;
    }
    else if (a=='E')
    {
        cont=0.125;
    }
    else if (a=='S')
    {
        cont=0.0625;
    }
    else if (a=='T')
    {
        cont=0.03125;
    }
    else if (a=='X')
    {
        cont=0.015625;
    }
    return cont;
}
int main()
{
    int a=0;
    while(a==0)
    {
        string p;
        cin>>p;
        if(p.size()==1)
        {
            a++;
            break;
        }
        double c=0;
        int total=0;
        for(int i=0;i<p.size(); i++)
        {
            if(isalpha(p[i]))
                c=c+conta(p[i]);
            else
            {
                if(c==1)
                    total++;
                c=0;
            }
        }
        cout<<total<<endl;

    }
}