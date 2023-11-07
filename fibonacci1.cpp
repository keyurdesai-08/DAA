#include <iostream>
using namespace std;

int recursive_fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

int iterative_fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;    
    int a = 0, b = 1;
    
    for(int i = 2; i <= n; i++){
        int temp = a;
        
        a = b;
        b = b + b;
    }
    
    
    return b;  
}

int main(){
    for(int i = 0; i <= 10; i++) cout << recursive_fibonacci(i) << " ";
    cout << endl;
    
    for(int i = 0; i <= 10; i++) cout << iterative_
    fibonacci(i) << " ";
    cout << endl;
    
    return 0;
}
