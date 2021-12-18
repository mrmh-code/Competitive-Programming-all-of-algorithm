#include <bits/stdc++.h>
using namespace std;

void printSub(string input, string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }

    printSub(input.substr(1),output+input[0]);
    printSub(input.substr(1),output);

}

int main()
{
    string s;
    cin>>s;
    string output=" ";
    printSub(s,output);

}