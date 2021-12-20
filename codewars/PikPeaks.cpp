struct pos_num {
    size_t pos;
    int num;
};
PeakData pick_peaks(const std::vector<int> &v) {
    PeakData result;
    if (v.empty()) return result;
    size_t temp_pos;
    bool check = false;
    for (size_t i = 1; i < v.size() - 1; ++i) {
        if (check) {
          if(v[i] < v[i + 1]) {
            check = false;
          } else if (v[i] > v[i+1]){
            result.pos.push_back(temp_pos);
            result.peaks.push_back(v[i]);
            check = false;
          }
        }
        else if (v[i] > v[i - 1] and v[i] >= v[i + 1]) {
            if (v[i] == v[i + 1]) {
                temp_pos = i;
                check = true;
            } else {
                result.pos.push_back(i);
                result.peaks.push_back(v[i]);
            }
        }
    }
    
    return result;
}
