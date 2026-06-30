REVERSE NUMBER USING RECURSION-------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

void printReverse(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    printReverse(n - 1);
}

int main() {
    printReverse(10);
    return 0;
}


  
SUM OF N NUMBERS --------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int sum(int n){
    if(n == 1)
    return 1;
    
    return n + sum(n - 1);
    }
    
    int main(){
    int n;
    cin >> n;
    
    cout << "sum : "<< sum(n);
    
    return 0;
    }
    
FACTORIAL OF A NUMBER USING RECURSION------------------------------------------------------------------------------------------------------------------------------------------------------


  #include<iostream>
  using namespace std;
  
  int fact(int n){
  if(n == 0 || n == 1)
  return 1;
  
  return n * fact(n - 1);
  }
  
  int main(){
  int n;
  cin >> n;
  
  cout << "factorial :" << fact(n);
  
  return 0;
  }
FIBONACCI USING RECURSION------------------------------------------------------------------------------------------------------------------------------------------------------------------
  #include<iostream>
  using namespace std;
  
  int fibonac(int n){
      if(n == 0)
        return 0;
      if(n == 1)
        return 1;
  
  return fibonac(n - 1) + fibonac (n + 1);
  }
  
  int main(){
  int n;
  cin >> n;
  
  
        for(int i = 0; n < 0; i++)
  cout << " fibonaci of " << fibonac(n);
  
  return 0;
  }
  
  
POWER (N,X)-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

    int power(int x, int n){
    if(n == 0)
    return 1;
    
    return x * power(x, n - 1);
    }
    
    int main(){
    int x,n;
    cin >> x >> n;
    
    cout << power(n,x);
    return 0;
    }
  
