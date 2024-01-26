/*

Given a string without spaces, the task is to remove duplicates from it.
Note: The original order of characters must be kept the same. 

Example 1:
Input: S = "zvvo"
Output: "zvo"
Explanation: Only keep the first occurrence

Example 2:
Input: S = "gfg"
Output: gf
Explanation: Only keep the first occurrence

*/

// ******************************* CODE ********************************

/*

class Solution{
public:	
		
	string removeDups(string S) 
	{
	   //  Method-1
	  int n=S.size();
	  string ans="";
	  bool arr[26]={0};
	  
	  for(int i=0;i<n;i++)
	  {
	      if(arr[S[i]]==false)
	      {
	          ans+=S[i];
	          arr[S[i]]=true;
	      }
	      
	      else if(arr[S[i]]==true)
	      {
	          continue;
	      }
	  }
	  
	  return ans;


    // Method-2
    
      unordered_set<char> mp;
        string res = "";
    
        for (char c : S) 
        {
            if (mp.find(c) == mp.end()) 
            {
                mp.insert(c);
                res.push_back(c);
            }
        }
    
        return res;    
	  
	}
};

*/