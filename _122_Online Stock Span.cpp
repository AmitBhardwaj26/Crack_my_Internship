//link:https://leetcode.com/problems/online-stock-span/

/*
pop when price is greater than and if stack is zero than all its previous is lessor return countof i else return sub(stack greater number - countof i)
*/

class StockSpanner {
public:
    stack<pair<int,int>> st;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        i++;
        if(st.size()==0)  { st.push({price,i}); return i;}
        while(!st.empty() and st.top().first <= price) st.pop();
        int ans=i;
        if(!st.empty() ) ans=i - st.top().second ;  
    
        st.push({price,i});
        return ans;
    }
};


