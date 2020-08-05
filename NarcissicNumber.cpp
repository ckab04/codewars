/* 01/08/2020 /*
/*A Narcissistic Number is a positive number which is the sum of its own digits, 
each raised to the power of the number of digits in a given base. 
In this Kata, we will restrict ourselves to decimal (base 10).

For example, take 153 (3 digits):
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153  
*/
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

vector<long> numberDigits(int value);
int main()
{

vector<long> a =  numberDigits(153);
int count = a.size();
int sum = 0;

   cout<<"The number of digits is : "<<a.size()<<endl;
   for(auto  i = a.begin(); i != a.end(); i++ )
   {
       auto m = *i;
       cout<<"digit : "<<m<<endl;
       int num = pow(m , count);
       cout<<"The power is : "<< num << endl;
       sum +=  num;

   }
   cout<<"Is this a narcissistic number ??   : "<< sum <<endl;
    return 0;
}

bool narcissistic( int value ){
  //Code away


  return false;
}

vector<long>  numberDigits(int value)
{
  int v, r, count = 0 ;
  vector<long> digits; 
  while(value > 0)
  {
    v = value % 10 ;
    digits.push_back(v);
    r = value / 10;
    value = r; 
    count ++;
  }
  return digits;   
}