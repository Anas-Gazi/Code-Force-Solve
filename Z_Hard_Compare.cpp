#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b,c,d; // Using long long int to handle large input values
    cin >> a >> b >> c >> d;
    

    long double x= b * log(a); // Using long double for higher precision 
    long double y=  d * log(c); //used log instead of pow to avoid overflow

     if(x>y){
      cout<< "YES";
     }else{
      cout<< "NO";
     }
return 0;
}