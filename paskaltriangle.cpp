class Solution {
public:

vector<vector<int>> generate(int numRows) {
    vector<vector<int>>upper;
    for(int i=0;i<numRows;i++){
        vector<int>inner(i+1);
        int j=1;
        int k=i-1;
        int l=i;
        inner[0]=1;
        inner[l]=1;
        while(j<=k){
            inner[j]=upper[i-1][j-1]+upper[i-1][j];
            j++;
        }
        upper.push_back(inner);
    }
    return upper;
}
};