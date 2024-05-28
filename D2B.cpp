#include <bits/stdc++.h> 
using namespace std;

void toBinary(int dec){
    int n = dec;
    int i = 0;
    int binaryNum[32];

    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
       
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];

}

int main(){
    int dec = 10;
    toBinary(dec);    
    
    return 0;
}