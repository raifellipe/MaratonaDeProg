#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    cout<<fixed<<setprecision(4);
    double area, raio, pi=3.14159;
    cin>>raio;
    area=(raio*raio)*pi;
    cout<<"A="<<area<<endl;
 
    return 0;
}