


#include<iostream>
#include<stdio.h>

using namespace std;
struct rectangle {       //this is defing the struct
    int length;
    int breadth;
    char x;
};

int main()
{
    struct rectangle r1 = { 34,5 };

    cout << r1.length << endl;
    cout << r1.breadth << endl;
}
