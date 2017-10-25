#include <iostream>
#include"functii.h"
using namespace std;

int main()
{
    int n, x[100],k;
    readData(n,x);
    printData(n,x);

    cout<<endl<<"Dati Valoarea k= ";
    cin>>k;
    cout<<endl<<"Minimul din vector este= "<<minim(n,x);
    cout<<endl<<"Suma elementelor prime este= "<<sumPrim(n,x);
    cout<<endl<<"Suma elementelor care sunt palindrom mai mici decat valoarea k este= "<<sumPalindrom(n,x,k);


    return 0;
}
