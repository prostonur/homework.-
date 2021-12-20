std::string duplicate_encoder(const std::string& word) {
    std::string word_lower = "";
    for (char c : word)
        word_lower += std::tolower(c);

    std::string s = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (std::count(word_lower.begin(), word_lower.end(), word_lower.at(i)) > 1)
            s += ")";
        else
            s += "(";
    }
    return s;
}
