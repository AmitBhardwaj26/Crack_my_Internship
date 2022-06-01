//link:https://practice.geeksforgeeks.org/problems/lru-cache/1#

class LRUCache
{
    private:
    list<pair<int,int>> dq;
    
    unordered_map<int, list<pair<int,int>>::iterator> m;
    int Size=0,curs=0;
   
    public:
    
    
     //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        Size=cap;
       
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(m.find(key)!=m.end()) 
        {
            int x=(*m[key]).second;
             dq.erase(m[key]);
             dq.push_front({key ,x});
             m[key]=dq.begin();
            return x;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if(m.find(key)==m.end()  )
        {
            if( dq.size()==Size )
            {
                
             
            m.erase(dq.back().first);
            dq.pop_back();
            dq.push_front({key ,value});
            m[key]=dq.begin();
                
            }
            else
            {
                dq.push_front({key ,value});
                m[key]=dq.begin();
            }
        }
        else 
        {
            dq.erase(m[key]);
             dq.push_front({key ,value});
              m[key]=dq.begin();
        }
    
        // your code here   
    }
};