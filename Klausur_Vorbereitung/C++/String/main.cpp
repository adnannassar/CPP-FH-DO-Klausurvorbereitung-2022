#include <iostream>
#include "string.h"

using namespace std;

int main()
{
   const char* pc = "Hello";

    String *str = new String(pc);
    
    cout << str->at(1) << endl;
    return 1;
}