class LRUCache {
      Queue<Integer>q;
      Map<Integer,Integer>m;
      int size;
    public LRUCache(int capacity) {
        size=capacity;
        m=new HashMap<>();
        q=new LinkedList<>();
    }
    
    public int get(int key) {
         if (!m.containsKey(key)) {
            return -1;
        }
        q.remove(key);
        q.offer(key);
       return   m.getOrDefault(key, -1);

    }
    
    public void put(int key, int value) {
        if(m.size()==size&&!m.containsKey(key)){
            m.remove(q.peek());
            q.poll();
        }  if (m.containsKey(key)) {
            q.remove(key);
        }
        m.put(key,value);
        q.offer(key);
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
