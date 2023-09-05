#include <iostream>
#include <cstring>

int main() {
    char str1[100];
    char str2[100];
    char* s1;
    char* s2;

    // Ask the user to enter two strings
    std::cin.getline(str1, 100);
    std::cin.getline(str2, 100);

    // Assign memory addresses to the pointers s1 and s2
    s1 = str1;
    s2 = str2;

    // Determine the length of the first string
    int len1 = strlen(s1);

    // Iterate through the second string and concatenate it to the end of the first string
    while(*s2 != '\0') {
        s1[len1] = *s2;
        len1++;
        s2++;
    }

    // Add a null character to terminate the concatenated string
    s1[len1] = '\0';

    // Display the concatenated string
    std::cout << "Concatenated string: " << str1 << std::endl;

    return 0;
}