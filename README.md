# engch_cpp
methods that I edited/found useful and want to keep for easy reusing
# How to use: 
```
#include "Library.h"
using namespace Engch;
Library ec;
```
### void Library::changeCmdTextColor(int colorChoice) 
highlight the next character with color in cmd, 7 is default color.
```
// example 
printf("[");
ec.changeCmdTextColor(hConsole, 10); 
printf("%c", 'x'); // highlighted char
ec.changeCmdTextColor(hConsole, 7); // reset color back to default
printf("]");
```
### double Library::getRand(int range)
return a random double from 0 to range
```
```
### double Library::getDoubleModulus(double x, double y)
double modulus double, w/floating number point error. return x mod y in double.
```
```
### bool Library::isDoneBefore()
run only once. return true is not run before, false if run before. 
```
// example --> no yes yes
std::string e = "no";
printf("%s\n", e.c_str()); // no

if (ec.isDoneBefore()){
    e = "yes";
}
printf("%s\n", e.c_str()); // yes

if (ec.isDoneBefore()){ // never enter as it ran before already
    e = "no";
}
printf("%s\n", e.c_str()); // yes
```
