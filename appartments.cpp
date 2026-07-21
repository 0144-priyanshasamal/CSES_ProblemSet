#include <bits/stdc++.h>
using namespace std;
int n, m, k;

int main(){
    if (!(cin >> n >> m >> k)) return 0;
    vector<int> applicants(n);
    vector<int> appartments(m);
    for(int i=0;i<n;i++){
        cin >> applicants[i];
    }
     for(int i=0;i<m;i++){
        cin >> appartments[i];
    }
    sort(applicants.begin(), applicants.end());
    sort(appartments.begin(), appartments.end());
    int i=0,j=0,ans=0;
    while(i<n && j<m){
        if(appartments[j]< applicants[i]-k)
        j++;
        else if(appartments[j]> applicants[i]+k)
        i++;
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout << ans ;
    return 0;
}