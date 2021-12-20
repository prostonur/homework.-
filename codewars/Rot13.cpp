#include <string>#include <string>
using namespace std;

string rot13(string msg)
{
  string str_out = "";
  for (size_t i = 0; i < msg.size(); ++i) {
    if (msg[i] >= 'a' and msg[i] <= 'z') {
      if (int(msg[i]) + 13 > 122) 
        str_out +=char(97 + (13 - (122 - int(msg[i])) - 1));
      else 
        str_out += char(int(msg[i]) + 13);
    } else if (msg[i] >= 'A' and msg[i] <= 'Z') {
      if (int(msg[i]) + 13 > 90) 
        str_out +=char(65 + (13 - (90 - int(msg[i])) - 1));
      else 
        str_out += char(msg[i] + 13);
    } else str_out += msg[i];
  }
  return str_out;
}
