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

void greedyCoinChange(int coins[], int n, int amount){
    sort(coins,coins+n,greater<int>());
    int remainingAmount = amount;
    int num_of_coins ;
    for(int i=0; i<n; i++){
        num_of_coins = remainingAmount / coins[i];
        if(num_of_coins>0){
            cout<<coins[i]<<"x"<<num_of_coins<<"\n";
        }
        remainingAmount-=coins[i]*num_of_coins;
    }
}
 
int main() {
    int coins[] = {1,5,10,25}, n=4;
    int amount = 67;
    greedyCoinChange(coins,n,amount);
    return 0;
}