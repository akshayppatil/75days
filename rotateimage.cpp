#define X first
#define Y second
#define P pair < int , int >

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = (int)matrix.size();
        
        for(int s = 0; s < n / 2; ++s) {
            int row1 = s;
            int row2 = n - 1 - s;
            int col1 = s;
            int col2 = n - 1 - s;
            
            P p1 = { row1, col1 };
            P p2 = { row1, col2 };
            P p3 = { row2, col2 };
            P p4 = { row2, col1 };
            
            while(col1 < n - 1 - s) {
                
                int temp = matrix[p1.X][p1.Y];
                matrix[p1.X][p1.Y] = matrix[p4.X][p4.Y];
                matrix[p4.X][p4.Y] = matrix[p3.X][p3.Y];
                matrix[p3.X][p3.Y] = matrix[p2.X][p2.Y];
                matrix[p2.X][p2.Y] = temp;

                p1.Y++;
                p2.X++;
                p3.Y--;
                p4.X--;
                
                col1++;
            }
        }
    }
};