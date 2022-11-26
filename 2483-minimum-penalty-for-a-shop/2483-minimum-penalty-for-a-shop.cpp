class Solution {
public:
    int bestClosingTime(string c) {
        int yy = count(c.begin(), c.end(), 'Y');
        int nn = c.size() - yy;
        int ans = yy;
        int y = 0, n=0, hour = 0;
        if( yy == c.size()){
            return c.size();
        }
        if(nn == c.size()){
            return 0;
        }
        for(int i = 0; i < c.size(); i++){
            
            if(ans > (yy - y + n)){
                    ans = yy - y + n;
                    hour = i;
            }
            if(c[i] == 'N'){
                n++;    
            }else{
                
                y++;
            }
            
        }
        
        if(ans > nn){
            return c.size();
        }
        return hour;
    }
};