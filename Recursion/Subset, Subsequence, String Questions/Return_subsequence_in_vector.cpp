#include <bits/stdc++.h>
using namespace std;
vector<string> subsequence(string str1, string str2)
{
    if (str2.length() == 0)
    {
        vector<string> list;
        list.push_back(str1);
        return list;
    }
    vector<string> left = subsequence(str1 + str2[0], str2.substr(1));
    vector<string> right = subsequence(str1, str2.substr(1));
    left.insert(left.end(), right.begin(), right.end());
    return left;
}
int main()
{
    vector<string> list = subsequence("", "abc");
    for (auto value : list)
        cout << value << endl;
    return 0;
}