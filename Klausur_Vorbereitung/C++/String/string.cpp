#include "string.h"

String::String(const char *str) : str(str) {}
String::String(const String &orig)
{
    strcpy(this->str, orig.str);
}
char String::operator[](int pos)
{
    return pos >= 0 && pos < strlen(this->str) ? at(pos) : ' ';
}
char String::at(int pos)
{
    return pos >= 0 && pos < this->str[pos] ? at(pos) : ' ';
}
int length();