#include <bits/stdc++.h>
using namespace std;

vector<int> generateSubSet(vector<int> nums, int number)
{
    vector<int> temp;
    int j = 0;
    while (number > 0)
    {
        int last_digit = number & 1;
        if (last_digit)
        {
            temp.push_back(nums[j]);
        }
        j++;
        number = number >> 1;
    }

    return temp;
}

int main()
{
    vector<int> vec = {1, 2, 3};
    int n = vec.size();
    vector<vector<int>> ans;
    for (int i = 0; i < (1 << n); i++)
    {
        ans.push_back(generateSubSet(vec, i));
    }
}