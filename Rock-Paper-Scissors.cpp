//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	
	//~ cout<< fixed<<setprecision(3)<<(double) 4/3;
	while(1)
	{
		int n,m;
		cin>>n;
		if(n==0) exit(0);
		cin>>m;
		
		int t= (n*(n-1)*m)/2;
		vector<int> win;
		vector<int> lose;
		while(t--){
			
			int p1,p2; string s1,s2;
			cin>>p1>>s1>>p2>>s2;
			
			if(s1=="rock" and s2=="scissors")
				{win.push_back(p1); lose.push_back(p2);}
			if(s1=="rock" and s2=="paper")
				{win.push_back(p2); lose.push_back(p1);}
			 
			if(s1=="scissors" and s2=="rock")
				{win.push_back(p2); lose.push_back(p1);}
			if(s1=="scissors" and s2=="paper")
				{win.push_back(p1); lose.push_back(p2);}
				
			if(s1=="paper" and s2=="scissors")
				{win.push_back(p2); lose.push_back(p1);}
			if(s1=="paper" and s2=="rock")
				{win.push_back(p1); lose.push_back(p2);}
			 
			
			
		}
		
		for(int i=1; i<=n; i++){
			
			int w= count(win.begin(),win.end(),i);
			int l= count(lose.begin(),lose.end(),i);
			 
			int den= w+l;
			if(den==0) cout<<"-"<<endl;
			else 
			cout<<fixed<<setprecision(3)<< (double) w/den <<endl;
		}
		
		cout<<endl;
		continue;
	}
                  
    return 0;
 }

