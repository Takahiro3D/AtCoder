#include <bits/stdc++.h>
using namespace std;



// Generated by 2.14.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    int N;
    cin >> N;

    vector<int> H;
    for(auto& h: H){
        cin >> h;
    }

    unordered_map<int, vector<int>> H_dict;
    for(int i=0; i<N; i++){
        H_dict[H[i]].emplace_back(i);
    }

    int ans=0;
    
    for(auto& list : H_dict){
        auto idxs= list.second;
        int size = idxs.size();
        for(int i=0; i<N; i++){
            for(int j=0; i<N; i++){

            }
        }
    }

    

    return 0;
}
