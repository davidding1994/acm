#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int> vec[100010];
int ans[100010];
int main()
{
#ifdef ding_debug
    freopen("in.txt","r",stdin);
#endif
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i = 0; i <= n; i++) vec[i].clear();
        while(m--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        int q;
        scanf("%d",&q);
        for(int i = 1; i <= n; i++)ans[i] = 0;
        while(q--)
        {
            int cmd,u,v;
            scanf("%d%d",&cmd,&u);
            if(cmd == 0)
            {
                scanf("%d",&v);
                ans[u] += v;

            }
            else
            {
                int sum = 0;
                for(vector<int>::iterator it = vec[u].begin(); it != vec[u].end(); it++)
                {
                    sum += ans[*it];    
                }
                printf("%d\n",sum);
            }    

        }
        
    }        
    return 0;
}
