#include <bits/stdc++.h>
using namespace std;
int main()
{
    // map<string,string>gender;
    // gender["Mehedi"]="male";
    // gender["Melina"]="female";

    // cout<<gender["Mehedi"]<<" "<<gender["Melina"]<<endl;

    //check freqenc
    vector<long long>v={100000000,200000340,200000340};
    map<long long,int >cnt;
    for(auto u:v){
        cnt[u]++;
    }
    for(auto u: cnt){
        cout<<u.first<<" "<<u.second<<endl;
    }
}