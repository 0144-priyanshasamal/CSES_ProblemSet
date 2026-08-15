#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    long long ans = 1;
    for(long long coin : nums){
        if(coin > ans)
            break;
        ans += coin;
    }
    cout << ans << endl;
    return 0;
}
