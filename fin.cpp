#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    int c=1;
    cin>>test;
    while(test-->0){
    	string str = "";
        vector<pair<int,int>> pro;
        int n;
        cin>>n;
		int a[n][2];
	    char ch[n];
        for(int p=0;p<n;++p){
            cin>>a[p][0]>>a[p][1];
            pro.push_back(make_pair(a[p][0],p));
        }
        sort(pro.begin(),pro.end());
        bool fg=false;
        int cam=0,jam=0;
        for(int q= 0;q<n;++q){
            if(pro[q].first>=cam){
                ch[pro[q].second]='C';
                cam=a[pro[q].second][1];
            }
            else{
                if(pro[q].first>=jam){
                    ch[pro[q].second]='J';
                    jam=a[pro[q].second][1];
                }
                else{
                    str="IMPOSSIBLE";
                    break;
                }
            }
        }
 
        cout<<"Case #"<<c<<": ";
        if(str == "IMPOSSIBLE"){
            cout<<"IMPOSSIBLE"<<'\n';
        }
        else{
            for(int r=0;r<n;++r)
            {
                cout<<ch[r];
            }cout<<'\n';
        }
        c++;
    }
}
