#include <iostream>
using namespace std;

void insertion_sort(int A[], int n)
{
    int i,j,item;
    for(i=1; i<n; i++){
        item=A[i];
        j=i-1;
        while (j>=0 && A[j]>item)
        {
            A[j+1]=A[j];
            j=j-1;
        }

        A[j+1]=item;
        
    }
}

int main()
{
    int A[]={1,3,5,2,4};
    int n=5;
    insertion_sort(A,n);

    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}