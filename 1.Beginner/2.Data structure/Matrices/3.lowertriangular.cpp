#include <iostream>
using namespace std;
#define ROW 5
#define COL 5

int main()
{
    int i,j;
       int arr[5][5]={{1,2,3,4,5},
                       {6,7,8,9,10},
                       {11,12,13,14,15},
                       {16,17,18,19,20},
                       {21,22,23,24,25}};

         for(i=0; i<ROW; i++){
            for(j=0; j<COL; j++){
                if (i<j)
                {
                    cout<<arr[i][j]<<" ";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }


        
}