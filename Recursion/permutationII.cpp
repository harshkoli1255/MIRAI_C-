#include<iostream>
#include<vector>
#include<map>
using namespace std;

void permutationII(int n, map<int, int>&mp, vector<vector<int>>&ans, vector<int>&p) {
    if(p.size() == n) {
        ans.push_back(p);
        return;
    }

    // for(auto &[num, count] : mp) {
    //     if(count == 0) {
    //         continue;
    //     }

    //     p.push_back(num);
    //     mp[num]--;
    //     permutationII(n, mp, ans, p);
    //     p.pop_back();
    //     mp[num]++;
    // }
    
    for(auto &it : mp) {
        int num = it.first;
        int count = it.second; 
        if(count == 0) {
            continue;
        }

        p.push_back(num);
        mp[num]--;
        permutationII(n, mp, ans, p);
        p.pop_back();
        mp[num]++;
    }
}
int main(){
    vector<int>nums = {1,1,2};
    int n = nums.size();
    vector<int>p;
    vector<vector<int>>ans;
    map<int, int>mp;
    for(auto num : nums) {
        mp[num]++;
    }

    permutationII(n, mp, ans, p);

    for(auto &row : ans) {
        for(auto &ele : row) {
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}