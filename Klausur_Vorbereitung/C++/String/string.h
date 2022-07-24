#include <string>

class String
{
private:
    const char *str;

public:
    String(const char *str);
    String(const String &orig);
    char operator[](int pos);
    char at(int pos);
    int length();
};