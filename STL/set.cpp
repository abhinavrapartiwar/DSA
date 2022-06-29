#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> se;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        se.insert(s);
    }
    for (auto value : se)
        cout << value << endl;
    return 0;
}