#include <iostream>
 
using namespace std;
 
int main() {
int a,b,c;
while(cin>>a>>b>>c)
{
    if(a==b&&b==c)
        cout<<"*"<<endl;
    else if(a!=b&&b!=c)
        cout<<"B"<<endl;
    else if(b!=a&&a!=c)
        cout<<"A"<<endl;
    else if(c!=b&&c!=a)
        cout<<"C"<<endl;
    else
        cout<<"*"<<endl;
}
    return 0;
}