// Print fibonacci at n no. usinfg multiple recursion

#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    int last = fibo(n-1);
    int slast = fibo(n-2);
    return last + slast;
}
int main(){
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}