//link:- https://leetcode.com/problems/group-anagrams/


// my burst approach takes nlogn+n =O(nlogn)
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& st) {
//         vector<pair<string,int >> v;
//         for(int i=0;i<st.size();i++)
//         {
//             string s=st[i];
//             sort(s.begin(),s.end());
//             v.push_back({s,i});
//         }
//         sort(v.begin(),v.end());
//         vector<string > h;
//         vector<vector<string>> ans;
//         for(int i=0;i<v.size();i++)
//         {
//             if(i!=0 && v[i].first==v[i-1].first) h.push_back(st[v[i].second]);
//             else if(i==0) h.push_back(st[v[i].second]);
//             else 
//             {
//                 ans.push_back(h); h.clear(); h.push_back(st[v[i].second]);
//             }
//         }
//         ans.push_back(h);
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& st) {
        unordered_map<string,vector<string>> M;
        for(int i=0;i<st.size();i++)
        {
            string s=st[i];
            sort(begin(s),end(s));
            M[s].push_back(st[i]);// push in map ate[tea,eat ]
        }
        vector<vector<string>> ans;
        for(auto i: M)
        {
            ans.push_back(i.second); // push in ans;
           }
        return ans;
    }
};