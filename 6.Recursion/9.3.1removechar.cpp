#include <bits/stdc++.h>
using namespace std;

void removechar(char input[]){
    if(input[0]=='\0'){
        return ;
    }

    if(input[0]!='e'){
        removechar(input+1);
    }else{
        for(int i=0; input[i]!='\0'; i++){
            input[i]=input[i+1];
        }
        removechar(input);
    }
}

int main()
{
    char input[]="abcedef";
    removechar(input);
    cout<<input<<endl;
}