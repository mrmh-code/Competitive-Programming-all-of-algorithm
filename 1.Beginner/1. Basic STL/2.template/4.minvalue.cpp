#include <iostream>
#include <string.h>
using namespace std;

template<class DataType>
DataType MinValue(DataType a, DataType b)
{
    if (a<b)
    {
        return a;
    }
    else{
        return b;
    }
    
}

char *MinValue(char *str1,char *str2){
    if (strcmp(str1,str2))
    {
        return str2;
    }
    else{
        return str2;
    }
    
}

int main()
{
    cout<<"MinValue(50,5)       is="<<MinValue(50,5)<<endl;
    cout<<"MinValue(0.998,0.997)    is="<<MinValue(0.998,0.997)<<endl;
    cout<<"MinValue()    is:="<<MinValue('N','n')<<endl;
    cout<<"MinValue is :="<<MinValue("Niton","Rakib")<<endl;
}