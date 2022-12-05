#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v) 
{
  
     cout<<v.size()<<endl;
     for(int i = 0 ; i<v.size(); i++)
     {
          cout<<v[i]<<"  ";
     }
     cout<<endl;

}    
int main()
{
  
//declar vector
  vector<int>v ; 
  int n ; 
  cin>> n ;
  //input vector 
  for(int i = 0  ;i<n ; i++)
{
     int x ; 
     cin>>x ; 
     v.push_back(x);

} 
//input v1
vector<int>v1 ; 
v1.push_back(5) ; 
v1.push_back(7) ; 
v1.push_back(8) ;
//pop_back popout the last element of vector ;  
v1.pop_back() ; 
printvec(v) ; 
printvec(v1);
//we can copy the vector to another vector ; 
vector<int>v2 = v;
printvec(v2);
 





     return 0 ;
}