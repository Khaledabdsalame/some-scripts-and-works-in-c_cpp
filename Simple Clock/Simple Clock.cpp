
#include<windows.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int main() {
    int second;
    int min;
    int hour;

Rigle:
    while (1) {
        std::cout << "Enter Your Hour(0-23)" << std::endl;
        std::cin >> hour;
        if (hour > 23 || hour < 0) {
            system("cls");
            continue;
        }
        else {
            break;
        }
    }
    while (1) {
        std::cout << "Enter Your Min(0-60)" << std::endl;
        std::cin >> min;
        if (min > 60 || min < 0) {
            system("cls");
            continue;
        }
        else {
            break;
        }
    }
    while (1) {
        std::cout << "Enter Your Second(0-60)" << std::endl;
        std::cin >> second;
        if (second > 60 || second < 0) {
            system("cls");
            continue;
        }
        else {
            break;
        }
    }
    while (second <= 60 || hour < 24 || min < 60) {
        second++;
        if (second == 60) {
            second = 0;
            min++;
        }
        if (min == 60) {
            hour++;
            min = 0;
        }
        if (hour == 24) {
            hour = 0;
        }
        std::cout << hour << ":" << min << ":" << second << std::endl;
        std::cout << "Enter E to change time" << std::endl;
        std::cout << "Enter C To exit" << std::endl;
        Sleep(1000);
        if (GetAsyncKeyState('C')) {
            system("cls");
            exit(0);
        }
        if (GetAsyncKeyState('E'))
        {
            system("cls");
            goto Rigle;


        }
        system("cls");
    }
}
