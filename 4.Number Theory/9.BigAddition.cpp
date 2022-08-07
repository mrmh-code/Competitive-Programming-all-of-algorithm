#include <bits/stdc++.h>
using namespace std;

char digitToChar(int digit){
    return digit+'0';
}

int  charToDigit(char ch){
    return ch-'0';
}

string BigAdd(string s1,string s2){
    if(s1.size()>s2.size()){
        swap(s1,s2);
    }

    string result="";
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int cary=0;

    for(int i=0; i<s1.size(); i++){
        int d1=charToDigit(s1[i]);
        int d2=charToDigit(s2[i]);
        int sum=d1+d2+cary;
        int output_digit=sum%10;
        cary=sum/10;

        result.push_back(digitToChar(output_digit));    
    }


    for(int i=s1.size(); i<s2.size(); i++){
        int d1=charToDigit(s2[i]);
        int sum=d1+cary;
        int output_digit=sum%10;
        cary=sum/10;

        result.push_back(digitToChar(output_digit));    
    }
    if(cary){
        result.push_back('1');
    }

    reverse(result.begin(),result.end());

    return result;

}


int main(){
    
    string s1,s2;
    cin>>s1>>s2;
    cout<<BigAdd(s1,s2)<<endl;

    long long a,b;
    cin>>a>>b;
    cout<<a+b<<endl;

}