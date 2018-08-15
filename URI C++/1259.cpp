#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
bool in(int i, int j){ return (i>j);}
int main()
{
    vector<int> p, ip;
    int N, n;
    cin>>N;
    for (int i=0; i<N; i++)
    {
        cin>>n;
        if(n%2==0)
        {
            p.push_back(n);
        }
        else
            ip.push_back(n);
    }
    sort(p.begin(), p.end());
    sort(ip.begin(), ip.end(), in);
    for(int i=0; i<p.size(); i++)
        cout<<p[i]<<endl;
    for(int i=0; i<ip.size(); i++)
        cout<<ip[i]<<endl;
    
    return 0;
}
