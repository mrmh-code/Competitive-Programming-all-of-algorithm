#include <iostream>
using namespace std;
//using Loop GCD(Greatest Common Multiple) Diagnosis
int GCD(int n1,int n2){
    int reminder;
    int gcd;
    while(n2!=0){
        reminder=n1%n2;
        n1=n2;
        n2=reminder;
    }

    gcd=n1;
    return gcd;
}
//Using  Recursive Function 
int GCDREC(int n1, int n2){
    if (n1%n2==0)
    {
      return n2;
    }
    return GCDREC(n2,n1%n2);
    
}

//LCM-Least Common Multiple
int  LCM(int  n1,int n2){
    int i;
    int max=(n1>n2)?n1:n2;
    for(i=1; ; i++){
        if (max%n1==0 &&max%n2==0)
        {
           
           break;
        }else{
            max++;
        }
        
    }

    return max;
}


int main()
{
    int n1,n2;
    cin>>n1>>n2;
    // cout<<GCDREC(n1,n2)<<endl;
    //  cout<<GCD(n1,n2)<<endl;
    cout<<LCM(n1,n2)<<endl;

}