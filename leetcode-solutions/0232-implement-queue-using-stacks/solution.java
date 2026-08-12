class MyQueue {
Stack<Integer>ans1;
Stack<Integer>ans2;
    public MyQueue() {
        ans1=new Stack<>();
         ans2=new Stack<>();
    }
    
    public void push(int x) {
        ans1.push(x);

    }
    
    public int pop() {
        if(ans2.empty()){
            while(!ans1.empty())
            ans2.push(ans1.pop());
        }
        return ans2.pop();
    }
    
    public int peek() {
        if(ans2.empty()){
              while(!ans1.empty())
            ans2.push(ans1.pop());
        }
        return ans2.peek();
        
    }
    
    public boolean empty() {
        return ans1.empty()&&ans2.empty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
