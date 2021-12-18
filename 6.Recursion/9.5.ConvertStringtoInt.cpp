#include <bits/stdc++.h>
using namespace std;

int ConverStringToInt(char str[],int n){
    if(n==0){
        return 0;
    }

    int smallans=ConverStringToInt(str,n-1);
    int lastDigit=str[n-1]-'0';
    int ans=smallans*10+lastDigit;
    return ans;
}

int main()
{
    char str[]="123456";
    int a=ConverStringToInt(str,6);
    cout<<a<<endl;

}