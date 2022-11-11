#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> v, int sv, vector<bool> &Visited)
{
    cout << sv << endl;
    Visited[sv] = true;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        if (v[sv][i] == 1 && Visited[i] == false)
        {
            print(v, i, Visited);
        }
    }
}
//input 4 5 1 2 2 0 0 1 0 2 2 3
int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for (int i = 1; i <= e; i++)
    {
        int fv, sv;
        cin >> fv >> sv;

        matrix[fv][sv] = 1;
        // matrix[sv][fv] = 1;
    }

    vector<bool> visited(n, false);
    print(matrix, 1, visited);
}