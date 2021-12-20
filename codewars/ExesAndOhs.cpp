bool XO(const std::string& str)
{
  int count_x = 0;
  int count_o = 0;
  for (size_t i = 0; i < str.size(); ++i) {
    if (str[i] == 'x' or str[i] == 'X') count_x++;
    else if (str[i] == 'o' or str[i] == 'O') count_o++;
  }
  return count_x == count_o;
}
