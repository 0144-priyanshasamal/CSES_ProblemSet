#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    long long median = nums[n/2];
    long long ans=0;
    for(auto x:nums){
        ans+=abs(x-median);
    }
    cout << ans;

}