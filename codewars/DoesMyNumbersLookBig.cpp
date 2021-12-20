int narcissistic( int n ){
  int cl = n, step = 0, ost = 0, sum = 0, ch = 0;
  while (n > 0)
  {
    step += 1;
    n /= 10;
  }
  n = cl;
  while (n > 0)
  {
    ost = n % 10;
    ch = n % 10;
    n /= 10;
    for (int i = 1; i < step; ++i)
    {
      ost *= ch;
    }
    sum += ost;
  }
  n = cl;
  if (sum == cl)
  {
    return true;
  } else {
    return false;
  }
}
