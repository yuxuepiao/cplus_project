#include<string>
#include<vector>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<climits>
#include<stack>
using namespace std;
struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

public:
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        // false means not visited.
        bool visits[grid.size()][grid[0].size()];

        for (int i = 0 ; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                visits[i][j] = false;
            }
        }

        for (int i = 0 ; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (!visits[i][j] && (grid[i][j] == 1)) {
                    perimeter+=4;
                    visits[i][j] = true;
                    if (  i -1 > -1 && grid[i-1][j]==1) {
                        perimeter-=1;
                    }

                    if (i + 1< grid.size() && grid[i+1][j]==1) {
                        perimeter-=1;
                    }

                    if ( j + 1< grid[0].size() && grid[i][j+1]==1) {
                        perimeter-=1;
                    }

                    if ( j - 1> -1 && grid[i][j-1]==1) {
                        perimeter-=1;
                    }
                }
            }
        }
        

        return perimeter;    
    }
};

int main() {
    vector<vector<int>> matrix1;

    vector<int> row1 = {0,1,0,0};
    vector<int> row2 = {1,1,1,0};
    vector<int> row3 = {0,1,0,0};
    vector<int> row4 = {1,1,0,0};

    matrix1.push_back(row1);
    matrix1.push_back(row2);
    matrix1.push_back(row3);
    matrix1.push_back(row4);

    vector<vector<int>> matrix2;

    vector<int> row5 = {1};
    matrix2.push_back(row5);

    vector<vector<int>> matrix3;

    vector<int> row6 = {1,0};
    matrix3.push_back(row6);

    Solution s;
    cout << s.islandPerimeter(matrix1) << endl; // 16
    cout << s.islandPerimeter(matrix2) << endl; // 4
    cout << s.islandPerimeter(matrix3) << endl; // 4
    return 0;
}