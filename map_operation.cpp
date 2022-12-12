#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{  
  //declaration of maps 
   map< int , string> m ;
   m[2] = "first" ;
   m[3] = "second" ;
   m[8] = "not second" ;  
   m[5]  = "ow no " ; 
   m[4]  = "oppps" ;
   //we can use a funtion also 
   m.insert({7, "seven"}) ; 
  //we can run find opearation to find a element  ;
  
   auto it = m.find(3) ; 
   if(it == m.end())
   {
    cout<<"NOt Found"<<endl ;
   }
   else 
   {
    cout<<"YES"<<endl;
   }


   

  
  //print in incresing order
  for(auto value : m)
  {
    cout<<value.first<<" "<<value.second<<endl;
  }
}
  
  return 0 ;
}
