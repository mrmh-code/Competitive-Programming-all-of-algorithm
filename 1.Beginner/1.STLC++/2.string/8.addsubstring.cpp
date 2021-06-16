#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N="Mehedi";
    string t="Monir hasan";

    copy(t.begin()+5,t.begin()+11,back_inserter(N));
    // cout<<N<<endl;

    //spacefic character remove way
    string s="Mehedi Hhasan";
    s.erase(remove(s.begin(),s.end(),'H'),s.end());
     cout<<s<<endl;
}