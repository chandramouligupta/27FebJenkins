#include <iostream>

using namespace std;

int add(int a,int b){
	int c = a+b;
	return c;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<"A+B = "<<add(a,b)<<endl;
	return 0;
}
