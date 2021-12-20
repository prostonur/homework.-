static long findMissing(std::vector<long> list) {
    if (abs(list.at(1) - list.at(0)) > abs(list.at(2) - list.at(1)))
        return  list.at(0) + (list.at(2) - list.at(1));
    long d = list.at(1) - list.at(0);

    for (int i = 0; i < list.size() - 1; i++)
    {
        if (d != list.at(i + 1) - list.at(i))
            return list.at(i) + d;
    }
}
