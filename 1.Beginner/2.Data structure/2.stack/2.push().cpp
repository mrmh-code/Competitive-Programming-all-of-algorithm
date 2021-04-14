#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int capacity;
    int nextindex;

    public:
        stack(int cap){
            capacity=cap;
            arr=new int[capacity];
            nextindex=0;
        }

       void push(int ele){
           if (nextindex==capacity)
           {
              cout<<"stack Overflow\n";
              return;
           }
           arr[nextindex]=ele;
           nextindex++; 
       } 

       void Display(stack st){
           for(int i=nextindex-1; i>=0; i--){
               cout<<st.arr[i]<<" ";
           }
           cout<<endl;
       }

};


int main()
{
    stack st(5);//stack object parameter decleration capacity than push
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
   // st.push(100);//stack overflow printed?my stack  capacity is 5;

    st.Display(st);


}