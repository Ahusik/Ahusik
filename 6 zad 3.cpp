#include <iostream>

using namespace std;

int main()
{
int i,j,k=0;
char litery[7]="FEDCBA";
    cout << "Petle zagniezdzone"<< endl;
for(j = 0; j < 6; j++)
{
    for(i = 0; i <= j; i++) cout << litery[i];
    cout << endl;
}
}
