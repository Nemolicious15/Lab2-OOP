#include<iostream>
#include"functii.h"
#include<assert.h>
#include<math.h>
using namespace std;

// CITIRE VECTOR
void readData(int&n, int x[100])
{
    cout<<"Dati nr n= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]= ";
        cin>>x[i];
    }

}
// AFISARE VECTOR
void printData(int n, int x[100])
{
    for(int i=1;i<=n;i++)
        cout<<x[i]<<", ";
}
// MINIMUL
int minim(int n, int x[100])
{
    int mini=x[1];
    for(int i=2;i<=n;i++)
    {
        if(mini>x[i]) mini=x[i];
    }
    return mini;
}
// TESTARE MINIM
void testMini(int n, int x[100])
{
    int b[]={1,2,34,5,6}, a[]={10,23,5,2};
    assert(minim(5,b)==1);
    assert(minim(4,a)==2);

    cout<<"teste ok";
}
// VERIFICARE DACA UN ELEMENT ESTE PRIM
bool isPrime(int x)
{
	// Functia verifica daca x este prim
	// In: un nr nat x
	// Out: T/F
	if (x<2)
		return false;
	else
	{
		for (int i=2;i<=sqrt(double(x));i+=2)
		{
			if(x%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
void testisPrime()
{
	assert(isPrime(7)==true);
	assert(isPrime(4)==false);
	assert(isPrime(2)==true);
	assert(isPrime(1)==false);
	assert(isPrime(0)==false);
	assert(isPrime(-1)==false);
	cout<<"tests ok";
}
// SUMA ELEMENTELOR PRIME
int sumPrim(int n, int x[100])
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        if(isPrime(x[i]))
        {
            s=s+x[i];
        }
    }
    return s;
}
void testsumPrim(int n, int x[100])
{   int a[]={10,5,20,3}, b[]={12,4,7,3,5}, c[]={2,3,8,8,10};
    assert(sumPrim(4,a)==7);
    assert(sumPrim(5,b)==15);
    assert(sumPrim(5,c)==5);
    cout<<"teste ok";
}
// VERIFICARE DACA UN ELEMENT ESTE PALINDROM
bool palindrom(int x)
{   int a,c=0;
    a=x;
    while(a)
    {
        c=c*10+a%10;
        a/=10;
    }
    if (c==x)
    {
        return true;
    }
    else return false;
}
void testPalindrom(int x)
{
    assert(palindrom(121)==true);
    assert(palindrom(12)==false);
    assert(palindrom(0)==true);
    assert(palindrom(1)==true);
    assert(palindrom(111)==true);
    cout<<"teste ok";
}
// SUMA ELEMENTELOR PALINDROM MAI MICI DECAT O VALOARE K DATA
int sumPalindrom(int n, int x[100],int k)
{  int s=0;
    for(int i=1;i<=n;i++)
    {
        if((palindrom(x[i]))&&(x[i]<k))
        {
            s=s+x[i];
        }
    }
    return s;
}
void testsumPalindrom(int n, int x[100],int k)
{   int a[]={10,5,20,3}, b[]={12,4,7,3,5}, c[]={2,3,8,8,10};
    assert(sumPalindrom(4,a,200)==7);
    assert(sumPalindrom(5,b,200)==19);
    assert(sumPalindrom(5,c,200)==21);
    cout<<"teste ok";
}
