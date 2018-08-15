#include <iostream>
using namespace std;

int main ()
{
    int x;

    cin >> x;
    while (x!=0)
    {
        int t1=1,t2=2,total=0,aux=2;
        if (x==1)
            cout << '1' << endl;
        else if (x==2)
            cout << '2' << endl;
        else
        {
            while (aux!=x)
            {
                total=t1+t2;
                t1=t2;
                t2=total;
                aux++;
            }
            cout << total <<endl;
        }
        cin >>x;
    }
    return 0;
}
