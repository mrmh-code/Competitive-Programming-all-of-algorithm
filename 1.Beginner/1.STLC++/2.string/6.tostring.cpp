#include  <bits/stdc++.h>
using namespace std;

int main()
{
    int a=123;
    //integer to string
    string s=to_string(a);
    cout<<s<<endl;

    //string to integer
    string t="123";
    int n=stoi(t);
    n++;
    cout<<n<<endl;
}