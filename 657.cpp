class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.length()%2==1)
            return false;
        int l=0,h=0;
        for(auto &x:moves)
        {
            if(x == 'L')
                l--;
            else if(x =='R')
                l++;
            else if(x == 'U')
                h++;
            else if(x =='D')
                h--;
        }


        return (h==0 && l==0);
    }
};