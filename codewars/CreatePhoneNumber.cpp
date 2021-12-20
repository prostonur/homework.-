#include <string>#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string str1 = "";
  std::string str2 = "";
  for (int i = 0; i < 10; ++i )
  {
    if (arr[i] == 0) str1 += "0";
    if (arr[i] == 1) str1 += "1";
    if (arr[i] == 2) str1 += "2";
    if (arr[i] == 3) str1 += "3";
    if (arr[i] == 4) str1 += "4";
    if (arr[i] == 5) str1 += "5";
    if (arr[i] == 6) str1 += "6";
    if (arr[i] == 7) str1 += "7";
    if (arr[i] == 8) str1 += "8";
    if (arr[i] == 9) str1 += "9";
    
  }
  
  str2 = "(";
  str2 += str1[0];
  str2 += str1[1];
  str2 += str1[2];
  str2 += ") ";
  str2 += str1[3];
  str2 += str1[4];
  str2 += str1[5];
  str2 +=  "-";
  str2 += str1[6];
  str2 += str1[7];
  str2 += str1[8];
  str2 += str1[9];
  return  str2;
}
