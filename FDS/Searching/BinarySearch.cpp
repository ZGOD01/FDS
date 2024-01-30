#include<bits/stdc++.h>

using namespace std;

int binary(int high, int low, int mid){
    while(low <= high){
        mid = (low + high) / 2;
        if(mid == 19){
            cout << "YES";
            break;
        }
        else if(mid < 19){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}

int main(){
    int arr[] = {7, 9, 10, 16, 17, 19};
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int low = 0;
    int mid;

    binary(high, low, mid);

    return 0;
}
