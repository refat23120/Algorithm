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


void insertionSort(int A[], int n){
    int x,j;
    for(int i=1; i<n; i++){
        x = A[i] ;
        j = i-1;
        while(j>=0 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

void printArray(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<" "<<A[i];
    }
    cout<<"\n";
}
 
int main() {
    int arr[] = {8,5,4,7,3,21,6}, n = 7;

    cout<<"Array before sorting:\n";
    printArray(arr,n);

    insertionSort(arr,n);

    cout<<"Array after sorting:\n";
    printArray(arr,n);

    return 0;
}