void insert(stack<int>&s,int num)
{
    if(s.empty() || num>s.top())
    {s.push(num);
    return;}
    
        int k=s.top();
        s.pop();
        insert(s,num);
        s.push(k);
    
    
}

void SortedStack :: sort()
{
    if(s.empty())
    {return;}
    
    int num=s.top();
    s.pop();
    sort();
    insert(s,num);
}  
