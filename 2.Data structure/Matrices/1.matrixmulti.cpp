#include <iostream>
using namespace std;
#define size 2
int main()
{
    int multiA[size][size]={{5,4},
                         {4,4}};
    int multiB[size][size]={{6,7},
                         {4,8}};
    int c[size][size];

    
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            int  sum=0;
             for(int k=0; k<size; k++){
                 sum=sum+multiA[i][k]*multiB[k][j];
             }
                    c[i][j]=sum;
                 cout<<c[i][j]<<" ";
        } 
                     cout<<endl;
    }

}