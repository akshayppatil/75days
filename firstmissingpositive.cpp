class Solution
{
public:
	int firstMissingPositive(std::vector<int>& arr){
		int n = arr.size();
        // for all elements in range of 1,n we are checking if ith elements is at ith pos in array
        // and if not we fix it by swapping
        for (int i = 0; i < n; i++) {
            while (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
	    }
        
	for (int i = 0; i < n; i++)//checking if i is present at ith pos in array
		if (arr[i] != i + 1) 
			return i + 1;

	return n + 1;
	}
};