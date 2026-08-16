#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> movies;
    for(int i=0;i<n;i++){
        int a ,b;
        cin >> a >> b;
        movies.push_back({b,a});//(end,start)
    }
    sort(movies.begin(),movies.end());
    int ans=0;
    int lastend=0;
    for(auto movie:movies){
        int start=movie.second;
        int end=movie.first;
        if(start >=lastend){
            ans++;
            lastend=end;
        }

    }
    cout<<ans;
}