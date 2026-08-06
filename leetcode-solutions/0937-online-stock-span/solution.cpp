class StockSpanner {
public:
 stack<int>st;
    StockSpanner() {
       
       
    }
    
    int next(int price) {
        int c=1;
        while(!st.empty()&&st.top()<=price){
            st.pop();
            c+=st.top();
            st.pop();
        }
        st.push(c);
        st.push(price);
        return c;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
