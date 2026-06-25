//2 APPROACHES
//1APPROACH
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int s = 0;
        int e = row*col-1;

        

        while(s<=e)
        {
            int mid = s + (e-s)/2;
            int element = matrix[mid/col][mid%col];

            if(element == target)
            {
                return 1;
            }

            if(element < target)
            {
                s = mid + 1;
            }

            else{
                e = mid - 1;
            }
            
        }
        return 0;
    }
};

//APPROACH 2
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = m ? matrix[0].size() : 0;
        int  r = 0;
        int  c = n - 1;
        while (r < m && c >= 0) {
            if (matrix[r][c] == target) {
                return true;
            }
            matrix[r][c] > target ? c-- : r++;
        }
        return false;
    }
};
