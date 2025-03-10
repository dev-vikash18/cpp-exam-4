#include<iostream>
using namespace std;

int main(){

int row, col, sum = 0, idx = 0;


int arr[3][3] = { {1,2,3},
                  {4, 5, 6},
                  {7, 8, 9}
};

for(int i = 0; i < 3; i++){
    for(int j = i; j < 3; j++){
        cout<<arr[i][j];
    }
}




    return 0;
}