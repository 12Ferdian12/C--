#include <bits/stdc++.h> 
using namespace std;

void print(vector<int>& Array){
    for(int i = 0; i< Array.size(); i++){
        cout<<Array[i]<< ",";
    }
}

int Fib(vector<int>& Array, int Target){
    int i, calc;
    if(Target == 1){
        cout<< "Result"<<endl;
        for( int i = 0; i< Array.size(); i++){
            cout<< Array[i]<<"";
        }
    } 
    else{
        Array.push_back(2);
        for (i = 1; i < Target; i++){
            calc = Array[i] + Array[i-1];
            Array.push_back(calc); 
        }
    
    }
        print(Array);
}

int main(){
    vector<int> Arr = {1};
    int Target;
    cout << "Insert Length of the Sequence" << endl;
    cin >> Target;
    Fib(Arr, Target);
}

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1 