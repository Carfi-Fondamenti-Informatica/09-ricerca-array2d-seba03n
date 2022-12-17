
#include <iostream>
#include <cstring>
#include "lib.h"

using namespace std;

void listanomi(char a[10][20], char b[20]) {
    if(strcmp(a[0],b)==0) cout << 0;
    else if(strcmp(a[1],b)==0)cout << 1;
    else if(strcmp(a[2],b)==0)cout << 2;
    else if(strcmp(a[3],b)==0)cout << 3;
    else if(strcmp(a[4],b)==0)cout << 4;
    else if(strcmp(a[5],b)==0)cout << 5;
    else if(strcmp(a[6],b)==0)cout << 6;
    else if(strcmp(a[7],b)==0)cout << 7;
    else if(strcmp(a[8],b)==0)cout << 8;
    else if(strcmp(a[9],b)==0)cout << 9;
    else cout << "non presente";
