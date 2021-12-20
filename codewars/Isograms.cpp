bool is_isogram(std::string str) {
  std::string out = "";
  int Arr[100] = {0};
  for (unsigned long i = 0; i < str.length(); ++i)
  { 
    if(int(str[i]) > 90)
      {
        Arr[int(str[i]) - 32] += 1;   
      } else {
        Arr[int(str[i])] += 1; 
      }
  }
  int max = 1;
  for(int i = 0; i < 100; ++i)
    {
       (Arr[i] > max) ? max = Arr[i] : max += 0;
    }
  if (max == 1) 
    {
    return true;
    } else {
    return false;
    }
}
