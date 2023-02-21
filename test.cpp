#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        
        for(auto u : nums){
            mp[u]++;
        }
        
        if(nums.size() == mp.size()){
            return false;
        }
        
        return true;
    }

    
int main()
{
    vector<int> vec = {1,2,3,4};
      cout<<rotate(vec)<<endl;
    
}