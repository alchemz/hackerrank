#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  string a, b, c;  
cin >> a >> b;    
cout << a.length() << " " << b.length() << "\n"; 

c = a + b;
cout << c << "\n";

c[0] = a[0];
a[0] = b[0];   
b[0] = c[0];
cout << a << " " << b;

return 0;
    return 0;
}
