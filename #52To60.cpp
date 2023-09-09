#include<iostream>
using namespace std;


class shop{
	
	private :
		int id; float price;
		public:
			void setData(int a, float b){
				id = a;
				price = b;
			}
			void getData(void){
				cout<<"the id is "<<id;
				cout<<"the price is "<<price;
			}
};
int main(){
	//MAIN FUNCTION US THERE TO PREDICT
	int size = 3;
	shop *ptr = new shop[size];
	shop *ptrTemp = ptr;
	int p; float q;
	for(int i = 1; i<=3; i++){
		 
		  cout<<"enter the id and price of itemnumber"<<i<<endl;
		  cin>>p>>q;
		  ptr->setData(p,q);
		  ptr++;
		
	}
	
	for(int i=1; i<=3; i++){
		
		ptrTemp->getData();
		ptrTemp++;
	}
	//this is the best thing that ever happened in my life
	return 0;
}
