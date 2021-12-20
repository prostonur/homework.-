bool isalphaa(char a) {
    if ((a >= 'a' and a <= 'z') or (a >= 'A' and a <= 'Z')) return true;
    return false;
}
bool isdigit(char a) {
  if (a >= '0' and a <= '9') return true;
  return false;
}
std::string pig_it(std::string str)
{
    std::string sub;
    std::string out;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] != ' ' and !isalphaa(str[i]) and !isdigit(str[i])) {
            out +=str [i];
        } else if (str[i] == ' ' and !isalphaa(str[i - 1]) and !isdigit(str[i - 1])){
          out += ' ';
        }
        else if (str[i] != ' ' and (isalphaa(str[i]) or isdigit(str[i])) and i != str.size() - 1) {
            sub += str[i];
        }else {
            if (i == str.size() - 1) sub += str[i];
            if (sub.size() > 1) {
                std::string temp(sub.begin() + 1, sub.end());
                temp += sub[0];
                temp+= "ay";
                out += temp;
                if (str[i] == ' ') out += ' ';
            } else {
                out += sub;
                out += "ay";
                if (str[i] == ' ') out += ' ';
            }
            //std::cout << out << ' ' << str[i]<< '\n';
            sub = "";
        }
    }
    //out.erase(out.end() - 1, out.end());
    return out;
}
