// For leetcode using Stair case Algo 

/* 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n =  matrix.size();
    if (n == 0) return false;
    int m = matrix[0].size();
    int i = 0, j = m - 1;

    while(i<n && j>=0){
        if(matrix[i][j] == target){
            return true;
        } else if(matrix[i][j] > target) {
            j--;       //left
        } else {
            i++;      //down
        }
    }
    return false;
    }
};
 */


#include<iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key){
    int i=0, j=m-1;

    while(i<n && j>=0){
        if(mat[i][j] == key){
            cout<< "found at cell (" << i << "," << j <<")\n";
            return true;
        } else if(mat[i][j] > key) {
            j--;       //left
        } else {
            i++;      //down
        }
    }
    cout<<"key not found";
    return false;

}

int main(){
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};
    search(matrix, 4, 4, 33);
}



// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n = matrix.size();
//         if (n == 0) return false; 
//         int m = matrix[0].size();
        
//         int start = 0;
//         int end = n * m - 1;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             int mid_value = matrix[mid / m][mid % m]; // Convert mid to 2D index
            
//             if (mid_value == target) {
//                 return true;
//             } else if (mid_value < target) {
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//         return false; 
//     }
// };
