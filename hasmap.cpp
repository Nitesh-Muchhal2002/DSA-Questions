#include<bits/stdc++.h>
using namespace std;
int main()
{
	 //creation
	 unordered_map<string,int>m;
	 //insertion
	 //1
	 pair<string,int>p=make_pair("nitesh",3);
	 m.insert(p);
	 
	 //2
	 pair<string,int>pair2("muchhal",2);
	  m.insert(pair2);
	  //3
	  m["kabir"]=1;
	  
	  //search
	    cout<<m["nitesh"]<<endl;
	    
	    //size of pair
	    cout<<m.size()<<endl;//3
	    
	    //to check presence
	    cout<<m.count("nitesh")<<endl;//output 1
	    
	    //erase
	    m.erase("nitesh");
	    cout<<m.size()<<endl;//2
	    //itreator
	    unordered_map<string,int>:: iterator it =m.begin();
	    while(it!=m.end())
	    {
	    	cout<<it->first<<" "<<it->second<<endl;
	    	it++;
		}
}