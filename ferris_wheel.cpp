#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin >> n >>x;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>> nums[i];
    }
    sort(nums.begin(),nums.end());
    int left=0;
    int right = n-1;
    int gondolas =0;
    while(left <= right){
        if(nums[left] + nums[right] <=x){
            left++;
        }
        right--;
        gondolas++;
    }
    cout << gondolas << endl;
    return 0;
}