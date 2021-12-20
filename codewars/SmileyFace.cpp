int countSmileys(std::vector<std::string> arr)
{
  int counter = 0;
  if (arr.empty())
  {
    return 0;
  }else {
  for (unsigned long i = 0; i < arr.size(); ++i)
    {
      if (arr[i] == ":D" or arr[i] == ":)" or arr[i] == ":-D" or arr[i] == ":-)" or arr[i] == ":~D" or arr[i] == ":~)" or arr[i] == ";D" or arr[i] == ";)" or arr[i] == ";-D" or arr[i] == ";-)" or arr[i] == ";~D" or arr[i] == ";~)" )
        {
          counter += 1;
        }
    }
  return counter;
  }
}
