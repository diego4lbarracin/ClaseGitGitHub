#include <bits/stdc++.h>
using namespace std;

int functionHola(int x);
float retonarFlotante(float y);
double retornarDouble(double x);

int main()
{

    cout << "Blablba" << endl;
    cout << functionHola(31) << endl;
    cout << retonarFlotante(3.36) << endl;
    return 0;
}

int functionHola(int x)
{
    return x + 19;
}

float retonarFlotante(float y)
{
    return y * 10.6;
}

double retornarDouble(double x)
{
    return x / 10.3;
}