#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string a;
    cin>>N;
    string one, two;
    one="one"; two="two";
    int cont1=0;
    int cont2=0;
    while(N--)
    {
        cin>>a;
        if(a.size()==5)
            cout<<"3"<<endl;
        else
        {
            for (int i=0; i<a.size();i++)
            {
                if(a[i]==one[i])
                    cont1++;
                if(a[i]==two[i])
                    cont2++;
            }
            if(cont1>=2)
                cout<<"1"<<endl;
            if (cont2>=2)
                cout<<"2"<<endl;

        }
            cont1=cont2=0;
    }
}
