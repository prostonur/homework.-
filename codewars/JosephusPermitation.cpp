std::vector<int> josephus(std::vector<int> items, int k) {
    std::vector<int> out;
    size_t count_elem = -1;
    size_t added = 0;
    int orig = items.size();
    while (!items.empty()) {
        if (count_elem + k - added < items.size()) {
            count_elem += k;
        } else {
            count_elem += k;
            count_elem -= (items.size() + added);
            while (count_elem >= items.size())
                count_elem -= items.size();
            added = 0;
        }
        out.push_back(items[count_elem - added]);
        items.erase(items.begin() + count_elem - added);
        added++;
    }
    return out;
}Jo
