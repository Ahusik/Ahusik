#include<iostream>
#include<cstdlib>
using namespace std;

void zamien(int *a, int *b)
{
    int pom = *a;
        *a = *b;
        *b = pom;
}

void sortuj(int *a, int *b, int *c)
{
        if(*a<*b)
                zamien(a,b);
        if(*a<*c)
                zamien(a,c);
        if(*b<*c)
                zamien(b,c);
}

int main()
{
        int a, b, c;

        cout<<"Podaj trzy liczby: ";
        cin>>a>>b>>c;

        sortuj(&a,&b,&c);

        cout<<"Najwieksza: "<<a<<endl<<"Srednia: "<<b<<endl<<"Najmniejsza: "<<c<<endl;

        return 0;
}
