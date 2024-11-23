class Solution {
public:
    vector<int> applyOperations(vector<int>& a) {
  
    int zeroes = 0;
     int n=a.size();
     for (int i = 0; i < n-1; i++)
    {
       
         if (a[i] == a[i+1])
        {
           a[i]=a[i]*2;
           a[i+1]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
       
         if (a[i] != 0)
        {
            swap(a[i],a[zeroes]);
            zeroes++;
        }
    }
     
   return a;
        
    }
};