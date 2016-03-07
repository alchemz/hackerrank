/***

class Classname{
   access_specifier:
      type1 val1;
      type2 val2;
      ret_type1 methods1(type_arg1 arg1, type_arg2 arg2,...)
      ...
    access_specifier:
      type3 val3;
      type4 val4;
      ret_type2 method2(type_arg3 arg3, type_arg3 arg3,...)
      ...
}...

****

Class SampleClass{
    private:
    int val;
    public:
    void set(int a){
    val=a;
    }
    int get(){
      return val;
    }
};

/**
get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
**/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
  public:
  void set_age(int a){
    age=a;
  }
  void set_first_name(string b){
    first_name=b;
  }
  void set_last_name(string c){
    last_name=c;
  }
  void set_standard(int d){
    standard=d;
  }
  
  int get_age(){
  return age;
  }
  
 string get_first_name(){
  return first_name;
  }
  
 string get_last_name(){
  return last_name;
  }
  
  int get_standard(){
  return standard;
  }
string to_string(){
  cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
  return " ";
}
    private:
  int age;
  int standard;
  string first_name;
  string last_name;
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
