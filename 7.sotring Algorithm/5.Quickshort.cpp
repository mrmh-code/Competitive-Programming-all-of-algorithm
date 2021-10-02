#include <iostream>
using namespace std;

int partition(int a[], int lb, int ub){
   int pivot=a[lb];
   int i=lb;
   int j=ub;

   while (i<j)
   {
       while (a[i]<=pivot)
       {
           i++;
       }
       while(a[j]>pivot){
           j--;
       }
       if (i<j)
       {
          swap(a[i],a[j]);
       }    
   }
   swap(a[lb],a[j]);
   return j;
   
}


void QuickSort(int a[], int lb, int ub){
    if (lb>=ub)
    {
      return;
    }

    int p=partition(a,lb,ub);
    QuickSort(a,lb,p-1);
    QuickSort(a,p+1,ub);
    
}

int main()
{
    int a[]={5,1,10,8,3,4,6,2,7,9};
    QuickSort(a,0,9);
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}