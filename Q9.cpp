  #include <iostream>
  using namespace std;
   int main() {
       int arr[] = {8, 3, 5, 2, 4, 7,9, 1};
       int result[8];

       for (int i = 0; i < 8; i++) {
           int L = 0;
           int S = 0;

           for (int j = i + 1; j < 8; j++) {
            if(arr[i]<arr[j])
           L+=arr[j];
           else
                 
          S+=arr[j];

           }

           result[i] = L * S;
       }

//   Print the resulting array
       for (int i = 0; i < 8; i++){
         cout << result[i] << " ";
  }
      cout << endl;

       return 0;
          }