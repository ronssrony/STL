#include<bits/stdc++.h>
using namespace std ;
int main()
{
     vector<int>v={2,3,4,5}  ;
     vector<pair<int,int>>v1 = {{1,2},{2,3},{5,6}} ; 

   vector<pair<int,int>> :: iterator pit ; 

   vector<int> ::iterator it;
   
   for(it = v.begin()  ; it!=v.end() ; it++)
{
     cout<<(*it)<<" " ;
}
cout<<endl;
   for(int value : v)
   {
    cout<<value<<" " ; 
   }
   cout<<endl;

  for(pit=v1.begin() ;  pit!=v1.end() ; pit++)
{
    cout<<(*pit).first << " "<<(*pit).second <<endl;
}
return 0 ;
}
