#include <bits/stdc++.h>
using namespace std;

void findSubset(char *input, char *output, int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';
        if (output[0] == '\0')
        {
            cout << "NULL" << endl;
        }

        cout << output << endl;
        return;
    }
    output[j] = input[i];

    findSubset(input, output, i + 1, j + 1);
    findSubset(input, output, i + 1, j);
}

int main()
{
    char input[500];
    char output[500];
    cin >> input;
    findSubset(input, output, 0, 0);
}