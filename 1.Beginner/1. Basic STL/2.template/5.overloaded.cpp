#include <iostream>
using namespace std;
template <class T1>
void ShowValue(T1 t1){
    cout<<"This is with one Generic Type ..."<<endl;
}

template<class T1, class T2>
void ShowValue(T1 t1,T2 t2){
    cout<<"This is with two Generic Type..."<<endl;
}

template<class T1, class T2,class T3>
void ShowValue(T1 t1, T2 t2, T3 t3){
    cout<<"This is with three Generic Type...."<<endl;

}

int main()
{
    ShowValue(40);
    ShowValue("niton",55);
    ShowValue("niton","computing","group");
}