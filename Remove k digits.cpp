//short soln for question Remove k Digits:

class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.length() <= k) return "0";
        string ret;
        for (auto d : num) {
            while (k && ret.length() && ret.back() > d) {
                ret.pop_back();
                --k;
            }
            ret.push_back(d);
        }
        ret.resize(ret.length() - k);
        int beg = 0;
        while (beg < ret.length() - 1 && ret[beg] == '0') ++beg;
        return ret.substr(beg, ret.length() - beg + 1);
    }
};
