bool is_square(int n)
{
  int counter = 0;
  for (int i = 0; i < n/2 + 1; ++i)
  {
      if (i * i == n) ++counter;
  }
  return counter;
}
