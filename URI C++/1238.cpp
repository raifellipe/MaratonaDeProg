#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a, b;
    int N;
    cin>>N;
    while(N>0){
    cin>>a>>b;
    int a1, b1;
    a1=a.size();
    b1=b.size();
    int cont1=0,cont2=0;
    if(a1>=b1)
    {
        while(a1>0)
        {
            cout<<a[cont1];
            cont1++;
            if(cont2<b1)
            {
                cout<<b[cont2];
                cont2++;
            }
            a1--;
        }
    }
    else
    {
        while(b1>0)
        {
            if(a1>cont1)
            {
                cout<<a[cont1];
                cont1++;
            }
            cout<<b[cont2];
            cont2++;
            b1--;
        }
    }
    cout<<endl;
    N--;
}
return 0;
}