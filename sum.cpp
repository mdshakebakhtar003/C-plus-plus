// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int print(int n){ if(n==0)  return 0; 
                    return n+print(n-1);
                }
int main() {
            int n;
            cout<<"enter n:";
            cin>>n;
            int sum=0;
           int add=print(n);
           cout<<add;
           
    return 0;
}