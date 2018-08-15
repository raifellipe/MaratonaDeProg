#include <iostream>
#include <string.h>
#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    string manei;
    int cents;
    while(cin>>manei)
    {
        stack<char> d;
        cin>>cents;
        d.push('.');
        int t,cont=0;
        t=manei.size();
        reverse(manei.begin(),manei.end());
        for(int i=0; i<t; i++)
        {
            if((cont%3==0)&&(cont!=0))
            {
                d.push(',');
                d.push(manei[i]);
            }
            else
            {
                d.push(manei[i]);
            }
            cont++;
        }
        cout<<"$";
        while(!d.empty())
        {
            cout<<d.top();
            d.pop();
        }
        if(cents<10)
            cout<<"0"<<cents<<endl;
        else
            cout<<cents<<endl;
    }
    return 0;
}
