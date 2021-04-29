#include <iostream>
#include <string>

using namespace std;

string bases = "0123456789ABCDEF";
string to_base(int num,int base)
{
	if (num>0){
		return to_base(num/base, base) + bases[num%base];
	}
	return "";
}

int main()
{
	int num, base;
	cout<<"Please enter a number: ";
	cin>>num;
	cout<<"Please enter a base to convert to: ";
	cin>>base; // gets base
	cout<<"Your result is: "<<to_base(num, base);
	return 0;
}
