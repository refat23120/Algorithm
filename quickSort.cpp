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

int partition(int A[] , int l, int h){
    int pivot = A[h];
    int i = l-1;
    for(int j=l; j<=h; j++){
        if(A[j] < pivot){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[h]);
    return i+1;
}


void quickSort(int A[], int l, int h){
    if(l<h){
        int pIndex = partition(A,l,h);
        quickSort(A,l,pIndex-1);
        quickSort(A,pIndex+1,h);
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

    quickSort(arr,0,n-1);

    cout<<"Array after sorting:\n";
    printArray(arr,n);

    return 0;
}