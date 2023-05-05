#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	   int n;
	   cin >> n;
       int m;
       cin >> m;
	   int arr[n] ;

	   set <int> s;
	   int max=INT_MIN;
	   for(int i = 0; i< n; i++){
	       cin >> arr[i];
	       s.insert(arr[i]);
	   }
	   for(int i = 0; i < n; i++){
	       if(max < arr[i])
	       max = arr[i];
	   }
	   int num=1 ;
	   int sum=0 ;
	   while(num){
	       if(s.find(num) != s.end()){
	           num++ ;
	           continue;
	       }
	       sum += num;
	       if(sum > m){
	           cout<< "NO" <<endl;
	           break;
	       }
	       s.insert(num);
	       if(sum == m){
	           int temp = 0;
	           for(int i = 1; i <= max; i++){
	               if( s.find(i) != s.end())
	               continue;
	               temp = 1;
	               break;
	           }
	           if(!temp) cout<< "YES" <<endl;
	           else cout<< "NO" <<endl;
	           break;
	       }
	       num++;
	   }
    }
}