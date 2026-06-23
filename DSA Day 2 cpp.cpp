6. REverse an Array


        
#include<iostream>
using namespace std;

int main(){

  int arr[] = {1,2,3,4,5,6};
  int n = 6;

  int start = 0;
  int end = 5;
  
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
    }
  
  for(int i = 0; i < n; i++) {
  cout << arr[i] << " ";
  }
  
  return 0;
  }
  
7. Shift all zero in the last [1,0,2,0,3,0,4,0,5]

#include<iostream>
using namespace std;

int main(){

int arr[] = {1,0,2,0,3,0,4,0,5};
int n = 9;

int j = 0;

for(int i = 0; i < n; i++){
  if(arr[i] != 0) {
    swap(arr[i], arr[j]);
    j++;
}
 }
for(int i = 0; i <n; i++){
cout << arr[i] << " ";
}

return 0;
}



8. Remove duplicates in Sorted Array [1, 1, 2, 2, 3, 4, 4, 5]
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = 8;

    int i = 0; 

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
            }
  }


    for (int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}

