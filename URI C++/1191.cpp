#include <map>
#include <iostream>
using namespace std;
char glo[52];
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
         }
     }
     void pos(node* no)
     {
        if(no!=NULL) {
            pos(no->esquerda);
            pos(no->direita);
            cout<<glo[no->numero];
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
         pos(raiz);
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
     map <char,int> m;
     string pre,cre;
     arvore av;
     int y,n;
     while(cin>>ws >> pre>>cre)
     {
         for(int i=0; i<pre.size(); i++)
         {
             m[cre[i]]=i;
             glo[i]=cre[i];
         }
         for(int i=0;i<pre.size(); i++)
         {
             av.insere(m[pre[i]]);
         }
         av.pos();
         cout<<endl;
         av.era();
         m.clear();
     }
     return 0;
 }
