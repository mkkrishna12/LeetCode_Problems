#define ll long long 

class Solution {
    ll seat , ans;
public:
    ll dfs(vector<vector<ll> >&adj, ll node, ll par){
        ll totalPeople = 1;
        for(ll i : adj[node]){
            if(i != par){
                totalPeople += dfs(adj, i, node);
            }
        }
        if(node != 0){
            ans+=(totalPeople + seat -1) / (seat );
        }
        return totalPeople;
    }
    ll minimumFuelCost(vector<vector<int>>& roads, int s) {
        ans = 0;
        seat = s;
        
        ll n = roads.size();
        vector<vector<ll>> adj(n+1);
        
        for(auto it : roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        dfs(adj, 0, 0);
        
        return ans;
    }
};