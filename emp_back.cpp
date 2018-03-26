#include<iostream>
#include<list>
using namespace std;


int main(){
	list<int> list1;
	list<int> list2;
	list<int>:: iterator i = list1.begin();
	list<int>:: iterator t = list2.begin();

	for( int i = 0;i<=5;i++)
		list1.emplace_back(i); // Emplace back working.

	cout<< " After emplace, the operation is";
	for(int &x : list1)
		cout<< x << endl;

	for( int k = 10; k<=100; k+=10)
		list2.emplace_front(i);// Emplace front working.


	cout<< " After emplace ,the operation is";

	for(int &y: list2)
		cout<< y<< endl;
	
}