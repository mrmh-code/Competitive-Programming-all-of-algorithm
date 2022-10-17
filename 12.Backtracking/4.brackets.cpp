#include <bits/stdc++.h>
using namespace std;

void generateBrackets(string output, int NumberOfBrackets, int OpenBrackets, int closeBrackets, int index)
{
    if (index == 2 * NumberOfBrackets)
    {
        cout << output << endl;
        return;
    }

    if (OpenBrackets < NumberOfBrackets)
    {
        generateBrackets(output + '(', NumberOfBrackets, OpenBrackets + 1, closeBrackets, index + 1);
    }

    if (closeBrackets < OpenBrackets)
    {
        generateBrackets(output + ')', NumberOfBrackets, OpenBrackets, closeBrackets + 1, index + 1);
    }
}

int main()
{
    string output;
    int NumberOfBrackets;
    cin >> NumberOfBrackets;
    generateBrackets(output, NumberOfBrackets, 0, 0, 0);
}