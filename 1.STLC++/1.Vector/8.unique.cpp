#include <bits/stdc++.h>
using namespace std;

    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        for(int i = n-1; i >= 0; i--){
            if(digits[i]==9){
                digits[i]=0;
            }else{
                digits[i]++;
                break;
            }
        }
        
        if(digits[0] == 0){
            digits.insert(digits.begin(),1,1);
        }
        
        return digits;
    }


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