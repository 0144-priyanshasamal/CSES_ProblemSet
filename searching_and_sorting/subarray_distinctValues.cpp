#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int n;
    cin >> n>>k;
    unordered_map<int,int> mp;
    vector<int> a(n);
    for(int i=0; i<n ;i++){
      cin >>a[i];
    }
    long long ans;
    int left=0;
    for(int right=0; right<n; right++){
        mp[a[right]]++;
        while(mp.size() > k){
            mp[a[left]]--;
            if(mp[a[left]] == 0){
                mp.erase(a[left]);
                left++;
            }
        }
        ans+=right-left+1;
    }
    cout << ans;
}