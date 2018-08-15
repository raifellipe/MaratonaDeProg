#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char N[50];

    while(cin>>N)
    {
        if(strcmp(N,"brasil")==0)
            cout<<"Feliz Natal!"<<endl;
        else if(strcmp(N,"alemanha")==0)
            cout<<"Frohliche Weihnachten!"<<endl;
        else if(strcmp(N,"austria")==0)
            cout<<"Frohe Weihnacht!"<<endl;
        else if(strcmp(N,"coreia")==0)
            cout<<"Chuk Sung Tan!"<<endl;
        else if(strcmp(N,"espanha")==0)
            cout<<"Feliz Navidad!"<<endl;
        else if(strcmp(N,"grecia")==0)
            cout<<"Kala Christougena!"<<endl;
        else if(strcmp(N,"estados-unidos")==0)
            cout<<"Merry Christmas!"<<endl;
        else if(strcmp(N,"inglaterra")==0)
            cout<<"Merry Christmas!"<<endl;
        else if(strcmp(N,"australia")==0)
            cout<<"Merry Christmas!"<<endl;
        else if(strcmp(N,"portugal")==0)
            cout<<"Feliz Natal!"<<endl;
        else if(strcmp(N,"suecia")==0)
            cout<<"God Jul!"<<endl;
        else if(strcmp(N,"turquia")==0)
            cout<<"Mutlu Noeller"<<endl;
        else if(strcmp(N,"argentina")==0)
            cout<<"Feliz Navidad!"<<endl;
        else if(strcmp(N,"chile")==0)
            cout<<"Feliz Navidad!"<<endl;
        else if(strcmp(N,"mexico")==0)
            cout<<"Feliz Navidad!"<<endl;
        else if(strcmp(N,"antardida")==0)
            cout<<"Merry Christmas!"<<endl;
        else if(strcmp(N,"canada")==0)
            cout<<"Merry Christmas!"<<endl;
        else if(strcmp(N,"irlanda")==0)
            cout<<"Nollaig Shona Dhuit!"<<endl;
        else if(strcmp(N,"belgica")==0)
            cout<<"Zalig Kerstfeest!"<<endl;
        else if(strcmp(N,"italia")==0)
            cout<<"Buon Natale!"<<endl;
        else if(strcmp(N,"libia")==0)
            cout<<"Buon Natale!"<<endl;
        else if(strcmp(N,"siria")==0)
            cout<<"Milad Mubarak!"<<endl;
        else if(strcmp(N,"marrocos")==0)
            cout<<"Milad Mubarak!"<<endl;
        else if(strcmp(N,"japao")==0)
            cout<<"Merii Kurisumasu!"<<endl;
        else
            cout<<"--- NOT FOUND ---"<<endl;
    }
    return 0;
}