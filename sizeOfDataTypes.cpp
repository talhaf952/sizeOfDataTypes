//Size of bool, char, short int, int,  float, wchar_t, long int, signed long int, unsigned long int, double//
#include<iostream>
using namespace std;
int main()
{
	cout<<"Here is the size of following data types."<<endl;
	
	cout<<"\nSize of bool is "<<sizeof(bool)<<" Byte."<<endl;
	cout<<"\ize of char is "<<sizeof(char)<<" Byte."<<endl;
	cout<<"\Size of short int is "<<sizeof(short int)<<" Byte."<<endl;
	cout<<"\ize of wchar_t is "<<sizeof(wchar_t)<<" Byte."<<endl;
	cout<<"\ize of int is "<<sizeof(int)<<" Byte."<<endl;
	cout<<"\Size of float is "<<sizeof(float)<<" Byte."<<endl;
	cout<<"\Size of long int is "<<sizeof(long int)<<" Byte."<<endl;
	cout<<"\Size of signed long int is "<<sizeof(signed long int)<<" Byte."<<endl;
	cout<<"\Size of unsigned long int is "<<sizeof(unsigned long int)<<" Byte."<<endl;
	cout<<"\Size of double is "<<sizeof(double)<<" Byte."<<endl;
	
	return 0;
}
