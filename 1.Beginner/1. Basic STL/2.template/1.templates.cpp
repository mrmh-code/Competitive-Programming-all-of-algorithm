#include <iostream>
using namespace std;

template<class DataType>
DataType Add(DataType a, DataType b)
{
    return a+b;
}

int main()
{
    int iresult;
    double dResult;

    iresult=Add(5,5);
    dResult=Add(10.4,4.5);
    cout<<"Iresult: "<<iresult<<endl;
     cout<<"dResult: "<<dResult<<endl;
}