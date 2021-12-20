std::string get_middle(std::string input) 
{
  std::string strout = "";
  if (input.length() % 2 != 0)
  {
    for(unsigned long i = 0; i <= input.length() / 2 ; ++i)
    {
      if (i == input.length() / 2 )
      {
      strout += input[i] ; 
      }
    }
    return strout;
  } else {
    for(unsigned long i = 0; i < input.length() / 2; ++i)
    {
      if (i == input.length() / 2 - 1)
      {
      strout += input[i];
      strout += input[i + 1]; 
      }
    }
    return strout;
  }
}
