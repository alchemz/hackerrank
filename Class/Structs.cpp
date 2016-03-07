/**
store details about age(int), first_name(string), last_name(string), and standard(int)
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
  int age;
  char first_name[51]; //the string needs a null space
  char last_name[51];
  int standard;
};

int main(){
   Student st;
   
   cin>>st.age>>st.first_name>>st.last_name>>st.standard>>;
   cout<<st.age<<" "<<st.first_name<<" "<<st.last_name<<" "<<st.standard;
   return 0;

}
