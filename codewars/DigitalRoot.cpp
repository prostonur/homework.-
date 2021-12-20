int digital_root(int n)
{
  int el = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
  if (n > 9)
  {
    while (n > 0)
    {
      el = n % 10;
      sum1 += el;
      n /= 10;
    }
  } else { return n; }
  if (sum1 > 9)
  {
    while (sum1 > 0)
    {
      el = sum1 % 10;
      sum2 += el;
      sum1 /= 10; 
    }
  } else { return sum1; }
    if (sum2 > 9)
  {
    while (sum2 > 0) 
    {
      el = sum2 % 10;
      sum3 += el;
      sum2 /= 10; 
    }
  } else { return sum2; }
    if (sum2 > 9)
  {
    while (sum3 > 0) 
    {
      el = sum4 % 10;
      sum4 += el;
      sum3 /= 10; 
    }
  } else { return sum3; }
}
