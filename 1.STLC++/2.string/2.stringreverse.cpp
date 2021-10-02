#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string temp=s;
    reverse(temp.begin(),temp.end());
    cout<<s<<"  "<<temp<<endl;

}