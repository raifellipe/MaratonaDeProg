#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N,aux;
    cin>>N;
    queue <int> P;
    queue <int> I;
    while (N!=0)
    {
        for (int i=1; i<=N; i++)
        {
            P.push(i);
        }
        while (P.size()>1)
        {
            aux=P.front();
            P.pop();
            I.push(aux);
            aux=P.front();
            P.pop();
            P.push(aux);
        }
        cout<<"Discarded cards: "<<I.front();
        I.pop();
        int a=I.size();
        while(a>0)
        {
            //if(I.size>1)

                 cout<<", "<<I.front();
                 I.pop();
                 a--;

        }
            cout<<endl;
            cout<<"Remaining card: "<<P.front()<<endl;
        while(!P.empty())
        {
            P.pop();
        }
        while(!I.empty())
        {
            I.pop();
        }

            cin>>N;
    }
    return 0;
}
