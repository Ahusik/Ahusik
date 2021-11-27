#include <iostream>

using namespace std;

int main()
{
int i,j;

    cout << "Petle zagniezdzone"<< endl;
for(j = 0; j < 5; j++)
{
    for(i = 0; i <= j; i++) cout << "$";
    cout << endl;
}
}
