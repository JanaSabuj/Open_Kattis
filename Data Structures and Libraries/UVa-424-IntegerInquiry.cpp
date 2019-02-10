//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 
 
 void BIGADD(string& s1, string& value ){
	 
	 string s2;
	 s2=value;
	 //s2 is always bigger
	 if( s1.length()>s2.length() )
		swap(s1,s2);
	 
	 int n1=s1.length();
	 int n2=s2.length();
	 int diff=n2-n1;
	 string temp="";
	 int carry=0;
	 for(int i=n1-1; i>=0; i--){
		 
		 int sum= (s1[i]-'0')+(s2[i+diff]-'0')+carry;
		 temp+=(sum%10+'0');
		 carry=sum/10;
		 
		 
	 }
	 
	 for(int i=n2-n1-1; i>=0; i--){
		 
		 int sum=(s2[i]-'0')+carry;
		 temp.push_back(sum%10+'0');
		 carry=sum/10;
		 
		 
	 }
	 
	 if(carry)
		temp.push_back(carry+'0');
		
	reverse(temp.begin(),temp.end());
		value=temp;
		//~ cout<<value<<endl;
	 
	 }
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
     //~ int flag=0;
     string value;
     while(1){
		 
		 string s;
		 cin>>s;
		 if(s=="0") {cout<<value<<endl; exit(0);}
		 BIGADD(s,value);
		 
		 
		 
		 //~ if(flag==0) {ans=s; flag=1; if(s=="0") {cout<<0<<endl; exit(0);}}
									//~ else {
							 
								//~ if(s=="0") {cout<<ans<<endl; exit(0);}
								//~ BIGADD(s);
									//~ }
	 }
     
    return 0;
 }

