#include <stdio.h> 
int main (void)
{
float a;

printf("podaj liczbe zmiennoprzecinkowa: ");
scanf("%f", &a);

printf("w postaci ulamka dziesietnego: %f\n",a);
printf("w postaci notacji wykladniczej: %e\n",a);
return 0;
}
