#include <iostream>
using  namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int Min(struct Array *Arr)
{   int min=Arr->A[0];
    for(int i=1; i<Arr->length; i++){
        if (Arr->A[i]<min)
        {
            min=Arr->A[i];
        }
        
    }
    return min;
     
    
}


int main()
{
    struct Array arr={{50,32,40,61,33},10,5};
    cout<<Min(&arr)<<endl;
}