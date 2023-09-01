/* #include <stdio.h>
#include <iostream>
using namespace std;
int main() {

    char text[100], *ptr;
    int length;
    cin>>text;
    ptr = text;

    length = 0;

    while ( *ptr != '\0') {
        length++;
        ptr++;
    }

    cout<<"Length of the string: "<<length;

    return 0;

} */
/* #include <iostream>
using namespace std;

int main() {
    char text[100];
    char* ptr;

    cin.getline(text, 100);

    ptr = text;

    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "Length of the string: " << length << endl;
    
    return 0;
} */


#include <iostream>
using namespace std;

int main() {
    char text[100]= {'h', 'e', 'l','l', 'o', '\0', 'w', 'o', 'r', 'l', 'd', '\n'};
    char* ptr;
    ptr = text;
    int length = 0;
    while (*ptr != '\n') {
        length++;
        ptr++;
    }
    cout << "Length of the string: " << length << endl;
    
    return 0;
}
