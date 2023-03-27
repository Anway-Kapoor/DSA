
// PRINT THE NUMBER OF OCCURENCES IN AN ARRAY



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     map<int, int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]] ++;
//     }


//     int q;
//     cin >> q;
//     while(q--){
//         int numbers;
//         cin >> numbers;
//         cout << mpp[numbers] << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int>mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]] ++;
    }

 
    while(n--){
        int numbers;
        cin >> numbers;
        cout << mpp[numbers] << endl;
    }
    return 0;
}
