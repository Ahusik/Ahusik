#include <iostream>

using namespace std;
int main()
{
    int i=1, suma=0;
    while(i<=100)
    {
        suma+=i;
        i++;
    }
    cout << "Suma od 1 do 100 " <<" = " << suma << endl;
}
