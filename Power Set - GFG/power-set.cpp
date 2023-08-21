//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		  	vector<string> vtr;
		  	int size=(1<<s.length());
		  	for(int i=0;i<size;i++)
		  	{
		  	    string str="";
		  	    for(int j=0;j<s.length();j++)
		  	    {
		  	        if(i&(1<<j))
		  	            str+=s[j];
		  	    }
		  	    if(str.length()!=0)
		  	    vtr.push_back(str);
		  	}
		  	sort(vtr.begin(),vtr.end());
		  	return vtr;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends