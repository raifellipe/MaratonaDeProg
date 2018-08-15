#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

bool ordem (int i,int j) { return (i>j); }

int main(){
    int a, c;
    vector<int> b, d;
    while(cin >> a && a>0){
        for(int i=0; i<a; ++i){
            cin >> c;
            b.push_back(c);
        }
        d=b;
        sort(b.begin(),b.end(),ordem);
        for(int i=0; i<a; ++i){
            if(d[i]==b[1]){
                cout << i+1 << endl;
                break;
            }
        }
        b.clear();
    }
    return 0;
}
