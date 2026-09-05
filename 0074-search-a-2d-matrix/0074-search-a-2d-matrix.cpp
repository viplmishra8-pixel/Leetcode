class Solution {
public:
    bool binarySearch(vector<int>& row, int target) {
    int low = 0;
    int high = row.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (row[mid] == target)
            return true;

        if (row[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            if(binarySearch(matrix[i] , target) ){
                return true ;
            }
        }
        return false ;
    }
};