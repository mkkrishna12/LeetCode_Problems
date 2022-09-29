  bool comp(vector<int>& i1, vector<int> i2)
{
        if(i1[0] != i2[0])
            return (i1[0] < i2[0]);
        return i1[1] < i2[1];
}
class Solution {
public:
  
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> res;
        vector<vector<int>> dis;
        
        for(int i : arr){
            dis.push_back({abs(i-x), i});
        }
        sort(dis.begin(), dis.end(), comp);
        for(int i = 0; i < k; i++)
        {
            res.push_back(dis[i][1]);
        }
        sort(res.begin(), res.end());
        
        return res;
    }
};