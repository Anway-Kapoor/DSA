
// print no. of elements that repeat in an array using hashing

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[10] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int no;
        cin >> no;
        cout << hash[no] << endl;
    }
    return 0;
}
