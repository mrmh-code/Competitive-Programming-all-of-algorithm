#include <iostream>
using namespace std;


class stack{
    int *arr;
    int nextindex;
    int capacity;

    public:
        stack(){
            capacity=4;
            arr=new int[capacity];
            nextindex=0;
        }
        stack(int cap){
            capacity=cap;
            arr=new int[capacity];
            nextindex=0;
        }

        int size(){
            return nextindex;
        }

        bool is_empty(){
            return nextindex=0;
        }

    
};

int main()
{

}