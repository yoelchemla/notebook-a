#include <string>
#include <stdlib.h>
#include<iostream>
#pragma once
#include "Direction.hpp"
using namespace std;

namespace ariel{

    class Notebook{

        public:
        static void write(const unsigned int row, const unsigned int col, const unsigned int page, Direction d, string txt);
        static string read(const unsigned int row, const unsigned int col, const unsigned int page, Direction d, unsigned int length);
        static void erase(const unsigned int row, const unsigned int col, const unsigned int page, Direction d, unsigned int length);
        static void show( unsigned int page);
    };
}