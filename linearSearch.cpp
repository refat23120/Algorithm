#include <algorithm>
#include <queue>
#include <iostream>
#include <set>
#include <string>
#include <vector>
 
#define REP(i,n) for(int i = 0; i < (n); ++i)
#define FOR(i,a,b) for(int i = (a); i <= (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define FORE(it,V) for(__typeof__(V.begin()) it = V.begin(); it != V.end(); ++it)
 
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define ll long long
using namespace std;
 

int linearSearch(int A[], int n, int x){
    for(int i = 0; i < n; ++i){
        if(x == A[i]){
            return i;
        }
    }
    return -1;
} 
 
int main() {
    int arr[6] = {8,6,4,3,2,1} , n = 6 , x;
    cout<<"Enter a value to be searched:\n";
    cin>>x;

    int index = linearSearch(arr,n,x);

    if(index > -1){
        cout<< "Element present at index : "<< index <<"\n";
    }else{
        cout<<"Element not found!!\n";
    }
    return 0;
}