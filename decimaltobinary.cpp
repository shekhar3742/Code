//decimal to binary --> 5 = 101


#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter number : ";
	cin>>n;
	int ans = 0;
	int i=0 ;
	while(n !=0){
		int bit = n & 1;
		ans = (bit * pow(10, i)) + ans ;
		n = n >> 1;
		i++;
	}
	
	cout<<"Binary of given number is "<<ans<<endl;
	return 0;
}
