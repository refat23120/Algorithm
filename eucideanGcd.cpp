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

int gcd(int num1, int num2){
    if(num2 == 0){
        return num1;
    }else{
        return gcd(num2,num1%num2);
    }
}
 
 
int main() {
    int value = gcd(12,18);
    cout<<"Gcd of 12 and 18 is = "<<value<<"\n";
    return 0;
}