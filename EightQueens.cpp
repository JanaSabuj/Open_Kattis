//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	char arr[8][8];
	vector<pair<int,int>> vec;
 	for(int i=0; i<8 ; i++){
		
		for(int j=0; j<8; j++){
			
			cin>>arr[i][j];
			if(arr[i][j]=='*')
				vec.push_back({i,j});
		}
 
		
	}
	
	
	
	//~ for(auto x:vec)
		//~ cout<<x.first<<","<<x.second<<endl;

	int sz=vec.size();
	if(sz!=8)
		{cout<<"invalid"<<endl;
		return 0;}
		
		for(int i=0; i<sz; i++)
		{
			
			for(int j=i+1; j<sz; j++)
			{	//left diagonal
				if(vec[i].first+ vec[i].second == vec[j].first+ vec[j].second){cout<<"invalid"; return 0;}
				//right diagonal
				if((vec[i].first- vec[i].second) == (vec[j].first- vec[j].second)){cout<<"invalid"; return 0;}
				//same column
				if(vec[i].second==vec[j].second) {cout<<"invalid"; return 0;}
				//same row
				if(vec[i].first==vec[j].first) {cout<<"invalid"; return 0;}
				
				
			}
			
		}
	
     cout<<"valid";
    return 0;
 }

