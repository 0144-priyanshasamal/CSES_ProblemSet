#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> nums;
    for(int i=0; i<n ;i++){
        int a;
        int b;
        cin >> a >> b;
        nums.push_back({a,1});
        nums.push_back({b,-1});
    }
    sort(nums.begin(), nums.end());
    int current=0;
    int ans=0;
    for(auto e:nums){
        current+=e.second;
        ans = max(ans,current);
    }
    cout << ans;
}