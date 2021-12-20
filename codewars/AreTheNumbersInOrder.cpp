bool isAscOrder(std::vector<int> arr)
{
    int detector = 1;
    for(int i = 1; i < arr.size(); ++i)
    {
      if (arr[i] - arr[i-1] <= 0)
        detector *= 0;
    }
  return detector;
}
