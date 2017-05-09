#include <iostream>
#include<boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main()
   {
       int t=10;
       while(t--){
    mp::cpp_int n,d;
    cin>>n>>d;
    cout<<(n+d)/2<<endl;
    cout<<(n-d)/2<<endl;
       }
    return 0;
}
