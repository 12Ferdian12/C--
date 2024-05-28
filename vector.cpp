#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    string cars[4] = {"Volvo"};
    vector<vector<int>> cars2 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<map<string, int>> cars3 = {{{"Volvo", 1}, {"BMW", 2}, {"Ford", 3}}};
    vector<int> myVector = {1, 2, 3, 4, 5};

    myVector.push_back(6);
    // myVector = {1,2,3,4,5,6}
    myVector.pop_back();
    // myVector = {1,2,3,4,5}
    myVector.insert(myVector.begin(), 10);
    // myVector = {10,1,2,3,4,5}
    myVector.insert(myVector.begin() + 2, 20);
    // myVector = {10,1,20,2,3,4,5}
    myVector.erase(myVector.begin());
    // myVector = {1,20,2,3,4,5}

    for(int i = 0; i < myVector.size(); i++){
        cout << myVector[i] << endl;
    }

    cout << "Size: " << myVector.size() << endl;
    // cout << "Capacity: " << myVector.capacity() << endl;
    // cout << "Max Size: " << myVector.max_size() << endl;
    // myVector.reserve(100);
    // cout << "Capacity: " << myVector.capacity() << endl;
    // myVector.resize(10);
    // cout << "Size: " << myVector.size() << endl;

    for(auto it = myVector.begin(); it != myVector.end(); it++){
        cout << *it << endl;
    }
    

    return 0;
}
