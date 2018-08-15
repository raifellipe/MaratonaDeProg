#include<iostream>
using namespace std;

int square(int a){
    if(a==1){
        return 1;
    }
    return a*a+square(a-1);
}

int main(){
    int a;
    while(cin >> a && a>0)
        cout << square(a) << endl;
    return 0;
}
