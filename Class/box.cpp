#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int BoxesCreated, BoxesDestroyed;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
class Box{
 private:
 int l, b, h;
 
 public:
 // Constructors: 
 // Box();
 Box(){
 l=h=b=0;
 ++BoxesCreated;
 }
 
 // Box(int,int,int);
 Box(int l, int b, int h){
   this->l = l;
   this->b = b;
   this->h = h;
   ++BoxesCreated;
 }
 
 // Box(Box);
 Box(const Box &B){
  this->l = B.l;
  this->b = B.b;
  this->h = B.h;
    ++BoxesCreated;
 }
 // Destructor
 ~Box(){
   ++BoxesDestroyed;
 }
 
 int getLength(){
   return l;
 }
 int getBreadth(){
   return b;
 }
 int getHeight(){
   return h;
 }
 long long CalculateVolume(){
    return (l*b*h);
 }
 
 //Overload operator < as specified
//bool operator<(Box &b)
friend bool operator<(Box& B1, Box& B2){
  if(B1.l<B2.l){
    return true;
  }else if(B1.l >B2.l){
    return false;
  }else {
    if(B1.b < B2.b){
       return true;
    }else if(B1.b>B2.b){
      return false;
    }else{
      if(B1.h <B2.h){
        return true;
      }else if(B1.h >B2.h){
         return false;
      }else {
      return false;
      }
    }
  }
}
 
 //Overload operator << as specified
//ostream& operator<<(ostream& out, Box B)
friend ostream& operator<<(ostream& out, Box B){
  out<<B.getLength() <<" "<<B.getBreadth()<<" "<<B.getHeight();
  return out;
}

};


void check(){
  int n;
  cin>>n;
  Box temp;
  for(int i=0; i<n; i++){
    int type;
    cin>>type;
    if(type==1){
      cout<<temp<<endl;
    }
    if(type==2){
      int l,b, h;
      cin>>l>>b>>h;
      Box NewBox(l,b,h);
      temp=NewBox;
      cout<<temp<<endl;
    }
       if(type==3){
      int l,b, h;
      cin>>l>>b>>h;
      Box NewBox(l,b,h);
      temp=NewBox;
     if(NewBox<temp){
       cout<<"Lesser"<<endl;
     }else{
        cout<<"Greater"<<endl;
     }
     
     if(type==4){
       cout<<temp.CalculateVolume()<<endl;
     }
     if(type==5){
     Box NewBox(temp);
     cout<<NewBox<<endl;
    }
    
  }
}

int main(){
 BoxesCreated=0;
 BoxesDestroyed=0;
 check2();
 cout<<"Boxes Created: "<<BoxesCreated<<endl<<"Boxes Destroyed: "<<BoxesDestroyed<<endl;
}
