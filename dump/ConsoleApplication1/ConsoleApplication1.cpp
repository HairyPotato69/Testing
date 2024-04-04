// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "BT.h"
void ntoZero(int n);
void Zeroton(int n);
int sumofsquare(int n);
int power(int x, int n);
void binaryPrint(int x);
int A(int m, int n);

int main()
{
#if 0
    std::cout << sumofsquare(5) << '\n';;
    std::cout << power(5, 3) << '\n';
    binaryPrint(19);
#endif
    BT t2;
    for (;;)
    {
        if (!t2.insert(4, 4)) break;
        if (!t2.insert(4, 1)) break;
        if (!t2.insert(4, 5)) break;
        if (!t2.insert(5, 7)) break;
        if (!t2.insert(5, 6)) break; 
        if (!t2.insert(1, 2)) break;
        if (!t2.insert(1, 3)) break;
        break;
    }
    int sum{};
    std::cout << "\nThe pre-order print of the t2 is:";
    t2.preOrderPrint();
    if (t2.sumValue(sum))
        std::cout << sum << '\n';
    else
        std::cout << "fail" << '\n';
    return 0;
}

void ntoZero(int n) {
    if (n > 0) {
        std::cout << n << '\n';
        ntoZero(n - 1);
    }
}

void Zeroton(int n) {
    if (n == 0)
        return;
    ntoZero(n - 1);
    std::cout << n << '\n';
}

int sumofsquare(int n) {
    if (n == 0)
        return 0;
    return n*n + sumofsquare(n - 1);
}

int power(int x, int n) {
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

void binaryPrint(int x) {
    // division of int with int gives u int(truncate the floating number
    if (x == 0)
        return;
    binaryPrint(x / 2);
    std::cout << x%2;
}

int A(int m, int n) {
    if (m == 0)
        return n + 1;
    if (m > 0 and n == 0)
        A(m - 1, 1);
    else if (m > 0 and n > 0)
        A(m - 1, A(m, n - 1));
}

/*
Ackerman(0, 0)
Number of functions called: 1
Ackerman(0,1) = 2
Number of functions called: 1
Ackerman(1,0): 2
Number of functions called: 2
Ackerman(1,1): 3
Number of functions called: 4
*/