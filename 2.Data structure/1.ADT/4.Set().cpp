#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Set(struct Array *arr, int index,int  x){
    if (index>=0 && index<arr->length)
    {
        arr->A[index]=x;
    }
    
}
void show(struct Array *arr){
        for(int i=0; i<arr->length; i++){
            cout<<arr->A[i]<<" ";
        }
        cout<<endl;
}

int  main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Set(&arr,3,50);
    show(&arr);
}