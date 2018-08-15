#include <iostream>
using namespace std;

int main()
{
    int C;
    string sh, rh;
    cin>>C;
    while(C>0)
    {
        cin>>rh;
        cin>>sh;
        if(rh=="pedra"&&(sh=="lagarto"||sh=="tesoura")||rh=="papel"&&(sh=="pedra"||sh=="spock")||rh=="tesoura"&&(sh=="papel"||sh=="lagarto")||rh=="lagarto"&&(sh=="papel"||sh=="spock")||rh=="spock"&&(sh=="pedra"|| sh=="tesoura"))
            cout<<"rajesh"<<endl;
        else if(rh==sh)
            cout<<"empate"<<endl;
        else
            cout<<"sheldon"<<endl;
        C--;
    }
    return 0;
}
