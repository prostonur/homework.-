#include <string>
using namespace std ; 

string reverseString (string str )
{
    std::string strout = "";
    for (int i = str.length()-1; i>=0; --i)
    {
      strout += str[i];
    }
    return strout;
}
