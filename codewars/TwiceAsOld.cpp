int twice_as_old(int dad, int son) {
  if (son * 2 == dad) return 0;
  else if (son * 2 < dad) {
    int count = 0;
    for (int i = son; i <= dad; ++i) {
      if (i * 2 == dad) return count;
      count++;
      dad++;
    }
  } else {
    int count = 0;
    for (int i = dad; i >= son; --i) {
      if (son * 2 == i) return count;
      count++;
      son--;
    }
  }
}
