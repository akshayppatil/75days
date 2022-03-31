   int numPairsDivisibleBy60(vector<int>& time) {
        // what we want to find is (x+y)%60 = 0, and according to math formula, (x+y)%60 = (x%60 + y%60)%60
        // so the problem turns out to be we need to find x%60 + y%60 = 60 or x%60 + y%60 = 0
        // if x%60 + y%60 = 0, then both x and y should be multiple times of 60, which means both x%60 and y%60 would be 0
        // respectively, if x%60 + y%60 = 60, then either x%60 or y%60 should be in the range of [1, 59]
		// for each number x in the input, we can get x%60, then we can compute and store the frequency of y%60 in a map, so that it's easy for us to count the result
        unordered_map<int, int> modMap;
        int sum = 0;
        for (auto& t : time) {
            int mod = t % 60;
            int remaining = 60 - mod;
            if (mod == 0) {
                remaining = 0;
            }
            if (modMap.find(mod) != modMap.end()) {
                sum += modMap[mod];
            }
            modMap[remaining]++;
        }
        return sum;
    }