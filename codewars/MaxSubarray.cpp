#include <vector>
int maxSequence(const std::vector<int>& arr){
    int currsumma = 0, avgsumma = 0;
    for (int start = 0; start < arr.size(); ++start) {
        for (int i = 0; i < arr.size(); ++i)
        {
            currsumma = 0;
            for (int q = start; q <= i; ++q)
            {
                currsumma += arr[q];
            }
            avgsumma = std::max(avgsumma, currsumma);
        }
    }
  return avgsumma;
}
