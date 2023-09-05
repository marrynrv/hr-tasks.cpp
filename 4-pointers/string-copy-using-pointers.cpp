#include <iostream>
#include <cstring>

int main() {
    char source[100];
    char destination[100];
    char* ptrSource;
    char* ptrDestination;

    std::cin.getline(source, 100);

    ptrSource = source;
    ptrDestination = destination;

    // Copy characters from source to destination using pointers
    while (*ptrSource != '\0') {
        *ptrDestination = *ptrSource;
        ptrSource++;
        ptrDestination++;
    }

    // Add a null character to the end of the destination string
    *ptrDestination = '\0';

    // Display the copied string 
    std::cout << "Copied string: " << destination << std::endl;

    return 0;
}
