#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N=1,P=1,cont=1;
    while(N!=0&&P!=0)
    {
        cin>>N>>P;
        int T[P], a;
        vector<int> M;
        for(int i=0; i<N; i++)
        {
            cin>>a;
            M.push_back(a);
        }
        for(int i=0; i<P; i++)
        {
            cin>>T[i];
        }
        stable_sort(M.begin(), M.end());
        if(N!=0&&P!=0)
        cout<<"CASE# "<<cont<<":"<<endl;

        for(int i=0; i<P; i++)
        {
         bool flag=false;
            for(int j=0; j<N; j++)
            {
                if((M[j]==T[i])&&(flag==false))
                {
                    cout<<T[i]<<" found at "<<j+1<<endl;
                    flag=true;
                }
            }
            if(flag==false)
            cout<<T[i]<<" not found"<<endl;
        }
        cont++;
    }
    return 0;
}
