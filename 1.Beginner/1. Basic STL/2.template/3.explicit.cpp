#include <iostream>
using namespace std;

template<class DataType>
void Add(DataType a, DataType b)
{
    cout<<"From Generated Function: a+b="<<a+b<<endl;
}

void Add(int a, int b)
{
    cout<<"From Explicit Specialization: a+b="<<a+b<<endl;
}

int main()
{
    Add(5,5);
    Add(9.33,9.232);
}