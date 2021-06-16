#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s="ABBECD";
    // sort(s.begin(),s.end());
    // int un=unique(s.begin(),s.end())-s.begin();

    // for(int i=0; i<un; i++){
    //     cout<<s[i];
    // }
    // cout<<endl;

    vector<string>vec;

    vec.push_back("Mehedi");
    vec.push_back("Mehedi");
    vec.push_back("Hasan");
    vec.push_back("Hasan");
    vec.push_back("Monir");
    vec.push_back("Monir");
    sort(vec.begin(),vec.end());
    
    int unitem=unique(vec.begin(),vec.end())-vec.begin();

    for(int i=0;i<unitem; i++){
        cout<<vec[i]<<endl;
    }

}