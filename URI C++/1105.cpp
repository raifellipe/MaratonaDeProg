#include <iostream>
#include <map>
using namespace std;
int main()
{
    int B,N;
    int devedor, recebedor, divida;
    map<int,int> bank;
    cin>>B>>N;
    int aux;
    while(B!=0&&N!=0)
    {
        for(int i=1; i<=B; i++)
        {
            cin>>aux;
            bank[i]=aux;
        }
        while(N--)
        {
            cin>>devedor>>recebedor>>divida;
            bank[devedor]-=divida;
            bank[recebedor]+=divida;
        }
        bool flag;
        flag=true;
        for(int i=1; i<=B; i++)
        {
            if(bank[i]<0)
            {
                flag=false;
                cout<<"N"<<endl;
                break;
            }
        }
        if(flag==true)
            cout<<"S"<<endl;
        bank.clear();
        cin>>B>>N;
    }
    return 0;
}
