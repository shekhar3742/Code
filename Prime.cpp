#include<iostream>
using namespace std;

int main(){
	int n;
	cout<< "Enter your number :"<<endl;
	cin>>n;
	for(int i =2; i<n ; i++){
		if(n % i == 0){
			cout<< n <<" not a prime number "<< endl;
				break;
		}
	
		else{
				cout<< n <<" prime number"<<endl;
		}
	}

	
	
	
     return 0;	
}
