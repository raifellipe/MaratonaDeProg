#include<iostream>
#include<string>
#include<algorithm>
using namespace  std;
bool confere(string a, string b)
{
    int cont=0;
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            if(a[i]!=b[j])
                cont++;
        }
        if(cont==b.size())
            return false;
        cont=0;
    }
    return true;
}
int main()
{

    int n;
    cin>>n>>ws;
    while(n--)
    {
        string c, a, m, j, aux;
        int cont=0;
        bool flag=true;
        getline(cin,c);
        getline(cin,a);
        getline(cin,m);
        if (confere(m,c)==false||confere(a,c)==false){
            flag=false;
        }
        for(int i=0; i<a.size(); i++)
        {
            for(int j=0; j<c.size();j++)
            {

                if(a[i]==c[j])
                {
                    c.erase(c.begin()+j);
                    cont--;
                }
                cont++;
            }
        }
        for(int i=0; i<m.size(); i++)
        {
            for(int j=0; j<c.size();j++)
            {

                if(m[i]==c[j])
                {
                    c.erase(c.begin()+j);
                    cont--;

                }
                cont++;
            }
        }
        sort(c.begin(),c.end());
        if(cont<(a.size()+m.size())&&cont!=0||flag==false)
        {
            cout<<"CHEATER"<<endl;
        }
        else if(cont==0&&(a.size()+m.size()!=0))
        cout<<endl;
        else
            cout<<c<<endl;

    }
}
