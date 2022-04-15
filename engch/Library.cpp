#include <iostream>
#include <Windows.h> // changeCmdTextColor
#include <ctime>
#include <random>
#include <chrono>

#include "Library.h"

using namespace Engch;

#define FIRST_TIME_HERE ([] {       \
    static bool isFirstTime = true; \
    auto wasFirstTime = isFirstTime;\
    isFirstTime = false;            \
    return wasFirstTime; } () )

void Library::changeCmdTextColor(int colorChoice) {
    // change the next character color in cmd, 7 is default color
    // https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c
    SetConsoleTextAttribute(this->hConsole, colorChoice);
    // example
//    printf("[");
//    SetConsoleTextAttribute(hConsole, 10);
//    printf("%c", 'x');
//    SetConsoleTextAttribute(hConsole, 7);
//    printf("]");
}

double Library::getRand(int range) {
    // return random double up to
    // https://stackoverflow.com/questions/12937963/get-local-time-in-nanoseconds
    auto start = std::chrono::high_resolution_clock::now();
    using namespace std;
    random_device crypto_random_generator;
    auto finish = chrono::high_resolution_clock::now();
    mt19937 actual_distribution(crypto_random_generator() * time(nullptr) *
                                chrono::duration_cast<chrono::nanoseconds>(finish - start).count());
    uniform_real_distribution<double> dist(0, range);
    return dist(actual_distribution);
}

double Library::getDoubleModulus(double x, double y) {
    // double modulus double, w/floating number point error
    // https://stackoverflow.com/questions/9138790/cant-use-modulus-on-doubles
    return x - (int) (x / y) * y;
}

bool Library::isDoneBefore() {
    // run only once. return true is not run before, false if run before
    // https://stackoverflow.com/questions/8412630/how-to-execute-a-piece-of-code-only-once

    // example --> no yes yes
//    Engch::Library ec;
//    std::string e = "no";
//    printf("%s\n", e.c_str()); // no
//
//    if (ec.isDoneBefore()){
//        e = "yes";
//    }
//    printf("%s\n", e.c_str()); // yes
//
//    if (ec.isDoneBefore()){ // never enter as it ran before already
//        e = "no";
//    }
//    printf("%s\n", e.c_str()); // yes
    return FIRST_TIME_HERE;
}

int main() {
    std::string banner = "Welcome to Engch::library!";
    return 0;
}


