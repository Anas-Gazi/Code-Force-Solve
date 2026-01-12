#include <iostream>
using namespace std;

int main()
{
    long  int a,b,c,d ,y;
    cin>>a>>b>>c>>d;
    
    // long int x= a*b*c*d;

    // y= x%100; // Getting the last 2 digits

    // x%10 for last digit
    //x%1000 for last 3 digits etc.
     long int res =a;
     res= (res*b)%100;
     res=(res*c)%100; // to avoid overflow
     res= (res*d)%100; 
     cout << res;
    
    //cout<<y;
    


       return 0;
}