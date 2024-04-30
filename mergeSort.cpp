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

int num[100000] , temp[100000];

void mergeSort(int l, int r){
   if(l == r) return;
   int mid = (l+r)/2;
   mergeSort(l,mid);
   mergeSort(mid+1,r);

   int i,j,k;
   for(int i=l,j=mid+1, k=l; k<=r; k++){
    if(i==mid+1) temp[k] = num[j++];
    else if(j==r+1) temp[k] = num[i++];
    else if(num[i]<num[j]) temp[k] = num[i++];
    else temp[k] = num[j++];
   }
   for(k = l; k<= r; k++){
    num[k] = temp[k];
   }
}

void printArray(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<" "<<A[i];
    }
    cout<<"\n";
}
 
int main() {
    int n;
    cout<<"Enter number of elements:\n";
    cin>>n;
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    cout<<"Array before sorting:\n";
    printArray(num,n);

    mergeSort(0,n-1);

    cout<<"Array after sorting:\n";
    printArray(num,n);

    return 0;
}