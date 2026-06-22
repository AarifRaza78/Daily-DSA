1. Find even number or odd Number 


#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << n << " is an even number." << endl;
    } else {
        cout << n << " is an odd number." << endl;
    }
    
    return 0;
}


2. Find sum of N numbers


#include<iostream>
using namespace std;

int main(){
    int n;
    int num;
    int sum = 0;
    
    cout << "Enter total number Count (N) = ";
    cin >> n;
    
    cout << "Enter" << n << " numbers:\n;
    for (int i = 0; i < n; i++){
    cin >> num;
    sum += num;
    
    }
    cout << "The sum of the number is: "<< sum << endl;
    
    return 0;
    }
    
    
3. Find Largest of three Numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    cout << largest << endl;

    return 0;
}



                                                                                               4. Print 1 to 100

#include<iostream>
using namespace std;

int main(){

cout <<"Number from 1 to 100"<< endl;
for(int i = 1 i <= 100; ++i){
cout << i << " ";
}

cout<< endl;
return 0;

5. Reverse string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}






