#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int Get(struct Array arr, int index){
    if (index>=0 && index<arr.length)
    {
       return arr.A[index];
    }
    return -1;
    
}


int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    cout<<Get(arr,3)<<endl;

}