#include <bits/stdc++.h>
using namespace std;

 
 int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
   
     //0,1,3,5,5

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
               int x=nums[i];
                for(int j=0; j<nums.size(); j++){
                    if(nums[j]>0){
                          nums[j]-=x;
                          cout<<nums[j]<<" ";
                
                    }
                  
                    
                }
                cout<<endl;
                  cnt++;
            
              
            }
            
              if(*max_element(nums.begin(), nums.end())==0){
                 return cnt;
              }
        }
      return cnt;
    }

int checkIthBit(int n, int i){
   int mask=1<<i;

   return (n&mask)>0?1:0;
}

void clearIthBit(int &n, int i){
   int mask=~(1<<i);
   n=(n&mask);
}


void setBit(int &n, int i){
   int mask=1<<i;
   n=n|mask;
}

void updateIthBit(int &n, int i,int v){
   clearIthBit(n,i);
   int mask=1<<i;

}

int main()
{
 
   //  vector<int> nums ={1,5,0,3,5};
   //  cout<< minimumOperations(nums)<<endl;
    
      // int a=9;
      // updateIthBit(a,2,1);
      // cout<<a<<endl;

      // int res=5;
      // for(int i=5; i<=7; i++){
      //    cout<<(res&i+1)<<endl;
      // }
      // cout<<(0&-0)<<endl;

      vector<int>vec={2,2,2};
      int ans=0;
      for(int i=0; i<vec.size(); i++){
         ans|=vec[i];
      }

      cout<<ans<<endl;
}

//   int a=10,b=5;
   //1010
   //0101

   //and operation
//    cout<<(a&b)<<endl; //output is zero .no twice value set bits

   //or operation
    // cout<<(a|b)<<endl;//output 15 .every element compare to  set bit 

   //xor operation
//    cout<<(a^b)<<endl;

   //even number
//    int n;
//    cin>>n;
//    if(n&1){
//     cout<<"n is odd number"<<endl;
//    }else{
//     cout<<"n is even number"<<endl;
//    }

    //built in count set bit
    // cout<<__builtin_popcount(10)<<endl;

    //left shift
    // cout<<(10<<1)<<endl; //1010 convert - 10100

    //right shift
    // cout<<(10>>1)<<endl; //1010 - 0101

    // check ITH BIT
    // int n,i;
    // cin>>n>>i;
    // cout<<checkIthBit(n,i)<<endl;