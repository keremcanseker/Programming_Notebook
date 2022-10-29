#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> v;

	for (int i = 0; i <= 10; ++i)
	{
		v.push_back(i);
	}

	for(auto it = v.cbegin(); it != v.cend();it++){
		cout << *it << "  ";//the value
		cout << &it << "  ";// adress of iterator
		cout << &(*it) << endl;// adress of the value
	}
	/* the difference between cbegin and begin is that 
		*i = value is not available with cbegin because the iterator is constant */



	cout<<"Size: "<<v.size()<<endl; // current size of the vector
	cout<<"Max Size: "<<v.max_size()<<endl; // max size of the vector
	// .capacity()
	// .resize(value)
	//.empty()

	// accessing elements
	cout << v[0]<<endl;
	cout << v.at(0)<<endl;
	cout << v.front()<<endl;//first element of the vector
	cout << v.back()<<endl;//last element of the vector
	// .clear()	

	//.insert(position,value)
	v.insert(v.begin()+2,20);

	//.erase(position)
	v.erase(v.begin()+2);
	
	//.pop_back() pop last element 



	return 0;
}