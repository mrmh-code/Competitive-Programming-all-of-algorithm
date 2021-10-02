#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int Max(struct Array *arr){
    int max=arr->A[0];
    for(int i=0; i<arr->length; i++){
        if (arr->A[i]>max)
        {
            max=arr->A[i];
        }
        
    }
    return max;
}

int main()
{
    struct Array arr={{50,32,40,61,33},10,5};
    cout<<Max(&arr)<<endl;
}