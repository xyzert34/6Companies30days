class Solution{  
public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        int n=string_list.size();
        map<string, vector<string>> map;
        for(int i=0;i<n;i++)
        {
            string s=string_list[i];
            sort(s.begin(),s.end());
            map[s].push_back(string_list[i]);
        }
        int idx=0;
        vector<vector<string> > ans(map.size());
        for(auto x:map)
        {
            auto v=x.second;
            for(int i=0;i<v.size();i++)
                {ans[idx].push_back(v[i]);
                    // cout<<"\n";
                }idx++;
        }
        return ans;
    }
};
