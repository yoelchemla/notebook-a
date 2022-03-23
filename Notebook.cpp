#include <string>
#include <stdlib.h>
#include<iostream>
#include "Notebook.hpp"
#include "Direction.hpp"
using namespace std;

namespace ariel{

    void Notebook::write(const unsigned int row, const unsigned int col, const unsigned int page, Direction d, string txt){

    }
    string Notebook::read(const unsigned int row, const unsigned int col, const unsigned int page, Direction d, unsigned int length){
        string str = " ";
        return str;
    }
    void Notebook::erase(const unsigned int row, const unsigned int col, const unsigned int page, Direction d, unsigned int length){

    } 
    void Notebook:: show(unsigned int page){
        
    }
}
