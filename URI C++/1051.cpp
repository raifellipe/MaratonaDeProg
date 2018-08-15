#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float valor, aux1=0, aux2;
    cin>>valor;
    if(valor<2000)
        cout<<"Isento"<<endl;
    else if(valor<3000)
    {
        aux1=(valor-2000)*0.08;
    }
    else if(valor<4500)
    {
        aux1=(valor-3000)*0.18;
        aux1+=80;
    }
    else
    {
        aux1=(valor-4500)*0.28;
        aux1+=350;


    }
    if(aux1>0){
    cout<<fixed<<setprecision(2);
    cout<<"R$ "<<aux1<<endl;
    }
    return 0;
}
