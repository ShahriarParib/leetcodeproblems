class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int res=nb;
    
        while(nb>=ne)
        {
            res=res+(nb/ne);
            nb=(nb/ne)+(nb%ne);
    
        }
        return res;
        
    }
};