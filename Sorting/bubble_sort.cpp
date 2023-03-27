#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        int didSwap = 0;
        for(int j=1;j<n-i;j++){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    bubble_sort(arr, n);
    for(int i=0;i<n;i++) cout << arr[i] << " ";  
    return 0;
}