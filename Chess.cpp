//Built by Sabuj Jana(greenindia) from Jadavpur University,Kolkata,India 
// God is Great

 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
   	freopen("input.txt", "r", stdin);
   	//~ int t;cin>>t;cout<<t;cerr<<t;cout<<"Hello World"; 
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
                  
     
     //~ cout<<('A'+'B')-2*'A'<<endl;
     int t;
     cin>>t;
     
     while(t--){
		 
		 char y1,y2; int x1,x2;
		 cin>>y1>>x1>>y2>>x2;
		 //~ cout<<y1<<y2;
		 //~ cout<<y1+x1<<" "<<y2+x2<<endl;
		 //if one is in black and the other is in white
		 if( (y1+x1)%2 != (y2+x2)%2)
			cout<<"Impossible";
			
		// if src=target
		else if( (y1==y2) and (x1==x2))
			cout<<0<<" "<<y1<<" "<<x1;
			
		//if they lie in the same diagonal
		else if( (x1+y1==x2+y2) or (x1-y1 == x2-y2))
			cout<<1<<" "<<y1<<" "<<x1<<" "<<y2<<" "<<x2;
		
		// else 2 steps and find the pts of valid intersection
		else {
			
			int a1= ((x1+y1)+(x2-y2))/2;
			int b1= x1+y1-a1;
			
			int a2= ((x2+y2)+(x1-y1))/2;
			int b2=	x2+y2-a2;
			
			char validy;
			int validx;
			if(a1>=1 and a1<=8 and b1>='A' and b1<='H')
				{validx=a1; validy=b1;}
			else
				{validx=a2; validy=b2;}
			
			cout<<2<<" "<<y1<<" "<<x1<<" "<<validy<<" "<<validx<<" "<<y2<<" "<<x2;
			
		}
		 
		 cout<<endl;
		 
	 }
     
     
    return 0;
 }

