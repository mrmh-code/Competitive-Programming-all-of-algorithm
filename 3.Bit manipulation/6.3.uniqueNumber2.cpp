#include <bits/stdc++.h>
using namespace std;

void uniqueNumberTwo(vector<int> nums)
{
    int n = nums.size();

    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        result = result ^ nums[i];
    }

    int pos = 0;
    int temp = result;

    while ((temp & 1) == 0)
    {
        pos++;
        temp = temp >> 1;
    }

    int setA = 0;
    int setB = 0;
    int mask = (1 << pos);
    for (int i = 0; i < nums.size(); i++)
    {
        if ((nums[i] & mask) > 0)
        {
            setA = nums[i];
        }
        else
        {
            setB = setB ^ nums[i];
        }
    }

    cout << setA << endl;
    cout << setB << endl;
}

int main()
{
    vector<int> vec = {1, 3, 5, 4, 3, 1, 5, 7};
    uniqueNumberTwo(vec);
}