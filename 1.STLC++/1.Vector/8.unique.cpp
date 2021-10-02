#include <bits/stdc++.h>
using namespace std;


int main()
{
     vector<int>v={3,3,4,5,2,1,7,7};
     sort(v.begin(),v.end());
     int SZ=unique(v.begin(),v.end())-v.begin();
     cout<<SZ<<endl;

     for(int i=0; i<SZ; i++){
         cout<<v[i]<<" ";
     }

     cout<<endl;
    

}