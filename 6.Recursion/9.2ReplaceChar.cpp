#include <bits/stdc++.h>
using namespace std;

void replaceChar(char input[],char x){
    if(input[0]=='\0'){
        return ;
    }

    if(input[0]==x){
        input[0]='E';
    }
    replaceChar(input+1,x);
}

int main()
{
    char input[]="Mehedi";
    replaceChar(input,'e');
    cout<<input<<endl;
}