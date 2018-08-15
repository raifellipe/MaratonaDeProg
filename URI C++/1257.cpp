#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N>0)
    {
        int L, T=0;
        string a;
        int cpa=0;
        cin>>L;
        for(int y=0; y<L; y++)
        {
            cin>>a;
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]=='A')
                    cpa=cpa+0;
                else if(a[i]=='B')
                    cpa=cpa+1;
                else if(a[i]=='C')
                    cpa=cpa+2;
                else if(a[i]=='D')
                    cpa=cpa+3;
                else if(a[i]=='E')
                    cpa=cpa+4;
                else if(a[i]=='F')
                    cpa=cpa+5;
                else if(a[i]=='G')
                    cpa=cpa+6;
                else if(a[i]=='H')
                    cpa=cpa+7;
                else if(a[i]=='I')
                    cpa=cpa+8;
                else if(a[i]=='J')
                    cpa=cpa+9;
                else if(a[i]=='K')
                    cpa=cpa+10;
                else if(a[i]=='L')
                    cpa=cpa+11;
                else if(a[i]=='M')
                    cpa=cpa+12;
                else if(a[i]=='N')
                    cpa=cpa+13;
                else if(a[i]=='O')
                    cpa=cpa+14;
                else if(a[i]=='P')
                    cpa=cpa+15;
                else if(a[i]=='Q')
                    cpa=cpa+16;
                else if(a[i]=='R')
                    cpa=cpa+17;
                else if(a[i]=='S')
                    cpa=cpa+18;
                else if(a[i]=='T')
                    cpa=cpa+19;
                else if(a[i]=='U')
                    cpa=cpa+20;
                else if(a[i]=='V')
                    cpa=cpa+21;
                else if(a[i]=='W')
                    cpa=cpa+22;
                else if(a[i]=='X')
                    cpa=cpa+23;
                else if(a[i]=='Y')
                    cpa=cpa+24;
                else if(a[i]=='Z')
                    cpa=cpa+25;
                cpa=cpa+i+y;
            }
            T=T+cpa;
            cpa=0;
        }
        cout<<T<<endl;
        N--;
    }
    return 0;
}
