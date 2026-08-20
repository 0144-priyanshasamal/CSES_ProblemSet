#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0; i<n ;i++){
        cin >> a[i];
    }
    unordered_set<int> songs;
    int left=0;
    int ans=0;
    for(int right=0;right<n;right++){
        while(songs.count(a[right])) {
            songs.erase(a[left]);
            left++;
        }

        songs.insert(a[right]);
        ans=max(ans,right-left +1);
    }
    cout << ans;
}