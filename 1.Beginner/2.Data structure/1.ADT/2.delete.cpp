#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int Delete(struct Array *Arr, int index){
    int x=0,i;
    if (index>=0 &&index<Arr->length)
    {
        x=Arr->A[index];
        for(i=index; i<Arr->length-1; i++){
            Arr->A[i]=Arr->A[i+1];
        }
        Arr->length--;
        return x;
    }

    return 0;
    
}
void show(struct Array *arr){
        for(int i=0; i<arr->length; i++){
            cout<<arr->A[i]<<" ";
        }
        cout<<endl;
}

int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Delete(&arr,2);
    show(&arr);



}