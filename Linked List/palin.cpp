// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    int maximumNumber(int num) 
    {
        string s = to_string(num);
        int l = s.length();
        for(int i = 0; i < l; i++)
        {
            if(s[i] == '7')
            {
                s[i] = '9';
                cout<< "Afetr " << s<< endl;
            }    
            else
            {
                s[i] = '7';
                cout << s <<endl;
            }
        }
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int num;
        scanf("%d",&num);
        
        Solution obj;
        int res = obj.maximumNumber(num);
        
        cout<<res<<endl;
        
    }
}
  // } Driver Code Ends