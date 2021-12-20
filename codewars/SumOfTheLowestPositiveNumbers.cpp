#include <vector>

long sumTwoSmallestNumbers(std::vector<int> num)
{
    long min = 99999999999999999, pmin = 999999999999999;
    if (num.size() > 1)
    {
      for (unsigned long i = 0; i < num.size(); ++i)
      {
        if ((num[i] < pmin) && (num[i] >= min))
        {
          pmin = num[i];
        }
        if (num[i] < min)
        {
          pmin = min;
          min = num[i];
        }
      }
      return min + pmin;
    } else {
      return num[0];
    }
}
