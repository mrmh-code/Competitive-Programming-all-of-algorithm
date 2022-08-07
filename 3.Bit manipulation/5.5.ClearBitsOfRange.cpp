#include <bits/stdc++.h>
using namespace std;

void ClearBitsOfRange(int &n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}

int main()
{
    int n = 15;
    int i = 0;
    int j = 2;

    ClearBitsOfRange(n, i, j);
    cout << n << endl;
}