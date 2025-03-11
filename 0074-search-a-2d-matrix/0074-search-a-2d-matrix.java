class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        int l = 0;
        int h = (m*n-1);
        while(l <= h){
            int mid = (l+h)/2;
            int row = mid/m;
            int col = mid%m;
            if(matrix[row][col]==target) return true;
            if(matrix[row][col] < target) l = mid+1;
            if(matrix[row][col] > target) h = mid-1;
        }
        return false;
        
    }
}