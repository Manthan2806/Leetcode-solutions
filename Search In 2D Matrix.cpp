class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix[0].size()-1;
        int mid,row=0;
        while(row<matrix.size())
        {
            mid=(i+j)/2;
            if(matrix[row][mid]==target)
            return true;
            else if(matrix[row][mid]>target)
            j=mid-1;
            else
            i=mid+1;

            if(i>j ){
            row++;
    i=0;
    j=matrix[0].size()-1;
            }
        }
return false;
    }
};

