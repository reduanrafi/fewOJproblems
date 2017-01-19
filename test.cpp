    #include<iostream>
    #include<cmath>
    #include<string>
    #include<set>
    #include<map>
    #include<sstream>
    #include<cstring>

    using namespace std;

    int main()
    {
    	long long n,temp;
    	long long i,j;
    	long long array[20000];

    	while(cin>>n){

    		if(n==0) break;

    		for(i=0; i<n; i++){
    			cin>>array[i];

    		}
    		for(i=0; i<n-1; i++){
    			for(j=0; j<n-i-1; j++){
    				if(array[j]>array[j+1]){
    					temp=array[j];
    					array[j]=array[j+1];
    					array[j+1]=temp;
    				}
    			}
    		}
    		for(i=0; i<n; i++){
    			cout<<array[i]<<endl;
    		}
    	}

    return 0;
    }
