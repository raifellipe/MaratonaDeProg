#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    while(N!=0)
    {
        cin>>N;
        if(N!=0)
            {
                cout<<"1";
                for(long long i=2; i*i<=N; i++)
                {
                    cout<<" "<<i*i;
                }
                cout<<endl;
            }
    }
    return 0;
}
