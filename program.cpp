// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
namespace val {
    int a = 0;
}

int a = 1;

int main() {
    int a = 2;
    
    cout<<val::a<<endl;
    cout<<::a<<endl;
    cout<<a<<endl;

    return 0;
}



//output
//0
//1
//2
