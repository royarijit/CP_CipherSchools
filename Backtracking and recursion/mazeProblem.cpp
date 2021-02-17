#include <bits/stdc++.h>
using namespace std;

void generatePaths(int row,int col,int m[5][5],int n,vector<string> &possiblePaths,string path){
    if (row<0||row>=n||col<0||col>=n||m[row][col]!=1) return;
    if(row==n-1&&col==n-1){
        possiblePaths.push_back(path);
        return;
    }
    m[row][col]=-1;
    generatePaths(row+1,col,m,n,possiblePaths,path+'D');
    generatePaths(row-1,col,m,n,possiblePaths,path+'U');
    generatePaths(row,col+1,m,n,possiblePaths,path+'R');
    generatePaths(row,col-1,m,n,possiblePaths,path+'L');
    m[row][col]=1;

}


vector<string> printPath(int m[5][5], int n) {
    vector <string> possiblePaths;
    string path="";
    generatePaths(0,0,m,n,possiblePaths,path);
    sort(possiblePaths.begin(),possiblePaths.end());
    return possiblePaths;
}

int main() {
        int n;
        cin >> n;
        int m[5][5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        vector<string> result = printPath(m, n);
        if (result.size() == 0) cout << -1;
        else{
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        }
        cout << endl;
}
