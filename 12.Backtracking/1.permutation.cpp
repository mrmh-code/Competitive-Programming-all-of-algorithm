#include <bits/stdc++.h>
using namespace std;

void permutation(string str, int i = 0)
{
    if (str.size() - 1 == i)
    {
        cout << str << endl;
        return;
    }

    for (int j = i; j < str.size(); j++)
    {
        swap(str[i], str[j]);
        permutation(str, i + 1);
        swap(str[i], str[j]);
    }
}

int main()
{
    string str = "abc";
    permutation(str);
}