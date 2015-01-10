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
        vector<int> index(numbers);
        sort(numbers.begin(),numbers.end());
        for(vector<int>::iterator x = numbers.begin(); x != numbers.end(); x ++)
        {
            vector<int>::iterator y = lower_bound(numbers.begin(),numbers.end(), target - *x);
            if(y != numbers.end() && *x + *y == target)
            {
                vector<int> ret;
                vector<int>::iterator it = find(index.begin(),index.end(),*x);
                ret.push_back(it - index.begin() + 1);
                it = find((*x == *y ? ++ it: index.begin()),index.end(),*y);
                ret.push_back(it - index.begin() + 1);
                sort(ret.begin(),ret.end());
                return ret;
            }
        }
    }
};
