#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main ()
{
    cout<<fixed<<setprecision(5);
    double A, B , C, delta, r1, r2;
    cin>>A>>B>>C;
    if (A!=0 && ((B*B)-(4*A*C))>0 )
    {
    delta=(B*B)-(4*A*C);
    r1= (-B+sqrt(delta))/(2*A);
    r2= (-B-sqrt(delta))/(2*A);
     cout << "R1 = "<<r1<<endl;
     cout << "R2 = "<<r2<<endl;
    }
    else
        cout<<"Impossivel calcular"<<endl;

    return 0;
}
