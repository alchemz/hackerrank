//Calculate the rectangle area with a class

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

class Rectangle { 
public:
int w,h; //w and h for width and height respectively
void Input(){
cin>>w>>h;
}

void Display(){
cout<< w<<" "<< h<< endl;
}
};
class RectangleArea: public Rectangle{
public:
int a;
void Display(){
int a;
a=w*h;
cout<< a<< endl;
} };

int main(){
  RectangleArea r_area;
  r_area.Input();
  Rectangle *r;
  r=&r_area;
  r->Display();
  r_area.Display();
  
  return 0;
}
