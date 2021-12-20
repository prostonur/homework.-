std::string no_space(std::string x)
{
    std::string strout = "";
    for (int i = 0; i < x.length(); ++i)
    {
        if(x[i] != ' ')
        {
          strout += x[i];    
        }
    }
  return strout;
}
