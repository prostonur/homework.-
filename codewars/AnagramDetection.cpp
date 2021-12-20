#include <string>
std::string make_new_str(std::string str, char a) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == a) {
            std::swap(str[i], str[str.size() - 1]);
            return std::string{str.begin(), str.end() - 1};
        }
    }
    return "-1";
}
std::string tolower_str(std::string str) {
    for (int i = 0; i < str.size(); ++i)
        if (str[i] >= 'A' and str[i] <= 'Z')
            str[i] = static_cast<char>(str[i] + 32);
    return str;
}
bool isAnagram(std::string test, std::string original){
    test = tolower_str(test);
    original = tolower_str(original);
    if (test.size() != original.size()) return false;
    for (size_t i = 0; i < test.size(); ++i) {
        if (make_new_str(original, test[i]) != "-1")
            original = make_new_str(original, test[i]);
        else
            return false;
    }
    return true;
}
