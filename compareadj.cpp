bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> prio;
        for(int i = 0; i < order.size(); i++)
            prio[order[i]] = i;
        auto cmp = [&](const string &s1, const string &s2){
            for(int i = 0; i < s1.size() && i < s2.size(); i++){
                if(prio[s1[i]] < prio[s2[i]])
                    return true;
                else if(prio[s1[i]] > prio[s2[i]])
                    return false;
            }
            if(s1.size() > s2.size()) return false;
            else    return true;
        };
        
        for(int i = 0; i < words.size() - 1; i++)
            if (not cmp(words[i], words[i+1]))
                return false;    
        return true;
    }