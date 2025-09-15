// ------------------ MUHAMMAD ABDULLAH ------------------- //
 // ------------------ CMS ID: 503871 -------------------- //
  // ------------------ Class: BSCS 14B ----------------- //
   // ----- Course: Data Structures And Algorithms ----- //
    // ------------------ Lab No: 02 ------------------ //
     // ----------------- Task No: 7 ---------------- //


#include <iostream>
using namespace std;

void findIndices(int arr[], int key, int size, int output[]){
    int count = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            output[count] = i;
            count++;
        }
    }
    output[count] = -101;
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 3, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int outputarr[size];

    findIndices(arr, 3, size, outputarr);

    for(int i=0; i<size; i++){
        if(outputarr[i] != -101){
            cout << outputarr[i] << " ";
        } else {
            cout << " " <<endl;
            break;
        }
    }

    return 0;
}
