#include <iostream>
using namespace std;

template<class DataType>
DataType Sum(DataType elements[],int size){
    DataType Sum=0;
    int i;
    for(i=0; i<size; i++){
        Sum+=elements[i];
    }


        return Sum;
}
int main()
{
    int scores[]={70,80,90,50};
    int Unit[]={15,45,35,25};
    double UnitPrice[]={50.50,70.70,80.80,90.90};
    cout<<"sum of Scores ="<<Sum(scores,4)<<endl;
    cout<<"Sum of UnitPrice ="<<Sum(Unit,4)<<endl;
    cout<<"Sum of Units="<<Sum(UnitPrice,4)<<endl;
}