#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }


};

class Solution {
public:

/*
    n = 1
    n = 2
    n = 4
    n = 8
    n = 16
*/
    Node* construct(vector<vector<int>>& grid) {
        int middle1 = grid.size() / 2 -1;
        int middle2 = grid[0].size() / 2 -1;
        int middle3 = grid.size() / 2 ;
        int middle4 = grid[0].size() / 2 ;
        Node* root = new Node();

        if (grid.size() == 1) {
            root->val = grid[0][0];
            return root;
        }

        Node* current = root;

        for (;;) {
            
        }

        

        return root;
    }

};