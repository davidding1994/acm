class Solution {
public:
    void solve()
    {
        while(1){
            vector<int> v;
            int n = 0;
            cin>> n;
            if (n == 0)break;
            int x;
            for(int i = 0; i < n; i++)
                cin>>x,v.push_back(x);
            int m;
            cin>>m;
            vector<int> ans = twoSum(v,m);
            for(int i = 0;i < ans.size(); i++)
                cout<< ans[i]<<' ';cout<<endl;
        }

        return ;
    }
    vector<int> twoSum(vector<int> &numbers, int target) {
        for(vector<int>::iterator x = numbers.begin(); x != numbers.end(); x ++)
        {
            vector<int>::iterator y = find(numbers.begin(),numbers.end(), target - *x);
            if(y != numbers.end())
            {
                vector<int> ret;
                ret.push_back(x - numbers.begin() + 1),ret.push_back(y - numbers.begin() + 1);
                return ret;
            }
        }
    }
};
