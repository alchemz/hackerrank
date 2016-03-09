#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>


//Inheritance Object Oriented Programming Language
class Triangle{
   public:
   void triangle(){
     cout<<"I am a triangle\n";
   }
};

//create a class derived from the base class triangle
class Isosceles: public Triangle{
   public:
   void isosceles(){
      cout<<"I am a isosceles triangle\n";
   }
   
   void description(){
    cout<<"In an isosceles triangle two sides are equal\n";
   }
};

//create a derived class
int main(){
   Isoceles isc;
   isc.isoceles();
   isc.description();
   isc.triangle();
   return 0;
}

