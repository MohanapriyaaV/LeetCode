class MyCalendarTwo {
    using int2=pair<int , int>;
    vector<int2> s1,s2;
public:
    MyCalendarTwo() {
        s1.reserve(1000);
        s2.reserve(2000);
    }
    
    bool book(int start, int end) {
        for(auto& [s,t]:s2)
        {
            if(max(s,start)<min(t,end))
                return 0;
        }
        for(auto& [s,t]:s1)
        {
            int s0=max(s,start) , t0=min(t,end);
            if(s0<t0)
                s2.emplace_back(s0,t0);
        }
        s1.emplace_back(start,end);
        return 1;
        
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */