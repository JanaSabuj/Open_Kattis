//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	string arr[10]= {
		
		" ","?","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
		
	};
	
	int t;
	cin>>t;
	cin.ignore();
	 int c=1;
	while(t--){
		
		string line;
		getline(cin,line);
		
		cout<<"Case #"<<c++<<": ";
		int len=line.length();
		int carry=-1;
		for(int i=0; i<len; i++)
		{
			for(int j=0; j<10; j++)
			{
				int sz=arr[j].length();
				for(int k=0; k<sz; k++)
				{
					if(line[i]==arr[j][k])
					{
						
						int no=j;
						int freq=k+1;
						if(carry==j)
							cout<<" ";
						while(freq--){
							cout<<no;
							
						}
						carry=j;
					}
					
				}
				
			}
			
		}
		
		cout<<endl;
	}
                  
     
    return 0;
 }

