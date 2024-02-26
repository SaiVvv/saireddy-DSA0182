#include<iostream>
using namespace std;
int main(){
	int tempurature=30;
	cout<<"Initial temourature:"<<tempurature<<"degree celsius"<<endl;
	for(int i=1;i<=5;++i){
		tempurature +=5;
		cout<<"After"<<i<<"hour(s),Tempurature:"<<tempurature<<"degree celsius"<<endl;
		
	}	
	return 0;
}
