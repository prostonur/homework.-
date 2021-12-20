#include <string>
#include <cmath>

 int Module(int a, std::string b, int len)
{
    int mod = 0;
    for (int i = 0; i < len; ++i)
        mod = (mod * 10 + b[i] - '0') % a;
    return mod; 
}

int last_digit(const std::string& str1, const std::string& str2){
    int len_a = str1.length(), len_b = str2.length();
    int lenght = len_b;
    if (len_a == 1 && len_b == 1 && str2[0] == '0' && str1[0] == '0')
        return 1;

    if (len_b == 1 && str2[0] == '0')
        return 1;

    if (len_a == 1 && str1[0] == '0')
        return 0;

    int exp = (Module(4, str2, lenght) == 0) ? 4 : Module(4, str2, lenght);

    int res = pow(str1[len_a - 1] - '0', exp);

    return res % 10;
}
