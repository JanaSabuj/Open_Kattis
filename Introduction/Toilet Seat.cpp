//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
                  
     
    string str;
    cin>>str;
    
    char base= str[0];
    //~ cout<<base;
    int n= str.size();
    //Case 1
    char leave='U';
    int cnt=0;
    
    for(int i=1; i<n; i++){
		//check toilet condition as soon as you enter
		if(str[i]!=base)
				cnt++;
		base=str[i];
		//do toilet
		
		// leave after making your choice
		if(leave!=base)
			cnt++;
		base=leave;
		
						
	}
    cout<<cnt<<endl;
    
    //Case 2 after resetting preious values
	base=str[0];
    leave='D';
    cnt=0;
    
    for(int i=1; i<n; i++){
		//check toilet condition as soon as you enter
		if(str[i]!=base)
				cnt++;
		base=str[i];
		//do toilet
		
		// leave after making your choice
		if(leave!=base)
			cnt++;
		base=leave;
		
						
	}
    cout<<cnt<<endl;
    
    //Case 2 after resetting preious values
	base=str[0];
    //~ leave='D';
    //~ leave=str[1];
    cnt=0;
    
    for(int i=1; i<n; i++){
		//check toilet condition as soon as you enter
		if(str[i]!=base)
				cnt++;
		base=str[i];
		//do toilet
		
		// leave after making your choice
		leave=str[i];
		if(leave!=base)
			cnt++;
		base=leave;
		
						
	}
    cout<<cnt<<endl;
    
    
    
    return 0;
 }

