#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> const &row) {
   cout << "The vector elements are : ";
   for(int i=0; i < row.size(); i++)
   cout << row[i] << ' ';
    cout<<endl;
}

int WtK(vector<vector<int>>& matrix, int k){
    int i,j;
    int count = 0;
    vector<int> temp = {};
    vector<int> sorted = {};
    vector<int> line = {};
    for( i = 0; i<matrix.size(); ++i){
        for(j = 0; j<matrix[i].size();++j){
            if(matrix[i][j] == 1){
                count++;
            }
        }
        temp.push_back(count);
        sorted.push_back(count);
        count = 0;
    }
    sort(sorted.begin(), sorted.end());
    print(temp);
    print(sorted);
    for(i = 0; i< k; i++){
        for(j=0; j<temp.size();j++){
            if(sorted[j] == temp[i]){
                line.push_back(j);                
            }
        }
    }
    print(line);
    
}

int main(){
    vector<vector<int>> matrix = {
    {{1,1,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,1,0,0,0},
    {1,1,1,1,1}}
    };
    int k = 3;
    WtK(matrix,k);
}