class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
   int totalDrank = 0;
        int empty = 0;
        totalDrank += numBottles;
        empty += numBottles;
        while (empty >= numExchange) {
            int newFull = empty / numExchange; 
            empty = empty % numExchange;       
            totalDrank += newFull;             
            empty += newFull;                 
        }
        return totalDrank;
    }
};
