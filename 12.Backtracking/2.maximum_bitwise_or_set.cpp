#include <bits/stdc++.h>
using namespace std;

int res = 0;
void solve(vector<int> &nums, int ind, int max, int curr)
{
	if (ind == nums.size())
	{
		if (curr == max)
			res++;
		return;
	}
	solve(nums, ind + 1, max, curr);
	solve(nums, ind + 1, max, curr | nums[ind]);
}

int main()
{
	vector<int> arr = {2, 2, 2};
	int max = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		max = max | arr[i];
	}
	solve(arr, 0, max, 0);
	cout << res << endl;
}