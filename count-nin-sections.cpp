#include <iostream>
using namespace std;

int main() {
    int n, section=0,length, countOfNums = 0;
    cin >> length;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {

        if (arr[i] <= arr[i -1]) {

            countOfNums++;

        }else if(arr[i] > arr[i - 1]){

            countOfNums = 0;
            
        }

        if (countOfNums == length) {
            section++;
        }
    }
    cout << "Number of Non-Increasing Sections with Length at Least " << length << ": " <<section;
    delete[] arr;  
    return 0;
}