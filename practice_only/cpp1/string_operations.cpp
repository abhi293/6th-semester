#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // strcat() function
    char s1[50] = "gfg";
    char s2[50] = "courses";
    strncat(s1,s2,6);
    cout<<s1<<endl;
    char s3[50] = "gfg ";
    strncat(s3,s2,3);
    cout<<s3<<endl;

    // strcmp() function
    char s4[50] = "gfg";
    char s5[50] = "gfg";
    cout<<strcmp(s4,s5)<<endl;  // 0 means both strings are equal
    char s6[50] = "gfg";
    char s7[50] = "efg";
    cout<<strcmp(s6,s7)<<endl; // 1 means s6 is greater than s7
    char s8[50] = "afg";
    char s9[50] = "bfg";
    cout<<strcmp(s8,s9)<<endl; // -1 means s8 is less than s9

    // strcpy() function
    char s10[50] = "gfg";
    char s11[50];
    strcpy(s11,s10);
    cout<<s11<<endl;
    return 0;
}