class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal = {{1}};
        if(numRows == 1) return pascal;

        for(int i = 1; i < numRows; i++) {
           // pascal += [1, ..., ..., ..., 1]
           vector<int> temp = {1};
            for(int j = 1; j < i; j++) {
                int v = pascal[i-1][j-1] + pascal[i-1][j];
                temp.push_back(v);
            }
            temp.push_back(1);
            pascal.push_back(temp);
        }
        
        return pascal;
    }
};  

/*
        for(int i = 0; i < pascal.size(); i ++) {
            for(int j = 0; j < pascal[i].size(); j++) {
                cout << pascal[i][j] << endl;
            }
        }
        */