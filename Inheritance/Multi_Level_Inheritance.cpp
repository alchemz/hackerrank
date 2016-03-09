#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
  public:
  void triangle(){
   cout<<"A"<<endl;
  }
};

class Isos: virtual public Triangle{
  public:
  void isos(){
   cout<<"B"<<endl;
  }
};

class Dad: pubic Isos{
   public:
   void dad(){
    cout<<"D"<<endl;
   }
};

int main(){
  Dad test;
  test.dad();
  test.isos();
  test.triangle();
  
  return 0
}

