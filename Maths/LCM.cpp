#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}
int lcm(int a, int b)
{
    int d = gcd(a, b);
    int f = a / d;
    int g = b / d;
    return f * g * d;
}
int main()
{
    cout << lcm(9, 18);
    return 0;
}