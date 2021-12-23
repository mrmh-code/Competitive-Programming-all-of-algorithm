#include <iostream>
using namespace std;

int main()
{
    //Bitwise And
   /* a=4=> 0000 0100
      b=7=> 0000 0111
      ________________
      a&b=> 0000 0100(=4)   */
      int a=4,b=7;
      cout<<"Bitwise And: a&b="<<(a&b)<<endl;

    /*Bitwise OR
     a=4=> 0000 0100
      b=7=>0000 0111
      ________________
      a|b=>0000 0111(=7)   */

      cout<<"Bitwise OR: a|b="<<(a|b)<<endl;

    /*Bitwise Xor
      a=4=>0000 0100
      b=7=>0000 0111
      ________________
      a^b=>0000 0011(=3)*/
      cout<<"Bitwise XOR: a^b="<<(a^b)<<endl;
     
    


}