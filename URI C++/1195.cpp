#include <map>
#include <iostream>
using namespace std;
 typedef struct sNo
 {
     int numero;
     struct sNo *esquerda;
     struct sNo *direita;
 } node;
 class arvore
 {
 private:
     node* raiz;
     void insere(int n, node* &no)
     {
         if(no==NULL)
         {
         no = new node;
         no->esquerda=NULL;
         no->direita=NULL;
         no->numero=n;
         }
         else
         {
            if(n> no->numero)
                insere(n,no->direita);
            else if(n< no->numero)
                insere(n, no->esquerda);
            else
                cout<<"ERRO!"<<endl<<endl;
         }
     }
     void pos(node* no)
     {
        if(no!=NULL) {
            pos(no->esquerda);
            pos(no->direita);
            cout<<" "<<no->numero;
        }
     }
     void pre(node* no)
     {
        if(no!=NULL) {
            cout<<" "<<no->numero;
            pre(no->esquerda);
            pre(no->direita);

        }
     }
     void em(node* no)
     {
        if(no!=NULL) {
            em(no->esquerda);
            cout<<" "<<no->numero;
            em(no->direita);

        }
     }
    void era(node* &no)
     {
        if(no!=NULL) {
            era(no->esquerda);
            era(no->direita);
            delete no;
            no=NULL;
        }
     }

 public:
     void insere(int n)
     {
         insere(n,raiz);
     }
     void pos()
     {
         cout<<"Pre.:"; pre(raiz); cout<<endl;

         cout<<"In..:"; em(raiz); cout<<endl;
         cout<<"Post:"; pos(raiz); cout<<endl;
     }
     void era()
     {
         era(raiz);
     }
     arvore()
     {
         raiz=NULL;
     }
 };
 int main()
 {
     arvore av;
     int y,n,x;
     cin >> y;
     for (int g=1; g<=y; g++)
     {
         cin>>ws >>n;

         for(int i=0;i<n; i++)
         {
             cin>>x;
             av.insere(x);
         }
         cout<<"Case "<<g<<":"<<endl;
         av.pos();
            cout<<endl;
         av.era();
     }
     return 0;
 }
