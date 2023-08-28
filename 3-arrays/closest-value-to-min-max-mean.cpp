#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int minValue = arr[0];
    int maxValue = arr[0];
    int sum = 0; 

    for (int i = 0; i < n; ++i) {
        sum += arr[i]; 
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }

    int mean = sum / n;
    int distanceToMin = abs(x - minValue);
    int distanceToMax = abs(x - maxValue);
    int distanceToMean = abs(x - mean);

    if (distanceToMin <= distanceToMax && distanceToMin <= distanceToMean) {
        cout << "Minimum" << endl;
    }
    else if (distanceToMax <= distanceToMin && distanceToMax <= distanceToMean) {
        cout << "Maximum" << endl;
    }
    else {
        cout << "Mean" << endl;
    }

    delete[] arr;
    return 0;
}

