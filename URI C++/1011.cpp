#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float r, n;
    cout<<fixed<<setprecision(3);
    cin>>r;
    cout<<"VOLUME = "<<(4*3.14159*(r*r*r))/3<<endl;
    return 0;
}
