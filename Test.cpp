#include<string>
#include "Notebook.hpp"
#include "doctest.h"
#include "Direction.hpp"
using namespace std;
using namespace ariel;

	TEST_CASE("check the funcutions post and read:"){
	
    ariel::Notebook notebook;
	
    CHECK_NOTHROW(notebook.write(5, 94, 1, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.erase(5, 31, 2, Direction::Horizontal,3));
    CHECK_NOTHROW(notebook.write(1, 27, 3, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(2, 82, 4, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(3, 39, 5, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(4, 57, 6, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(5, 24, 7, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(6, 1, 8, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(7, 19, 2, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(8, 21, 5, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(9, 43, 67, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(10, 5, 22, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(11, 4, 12, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(12, 3, 45, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(13, 2, 76, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(14, 1, 98, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(15, 11, 50, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(16, 22, 40, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(17, 33, 344, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(18, 44, 10, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(19, 55, 31, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(20, 11, 43, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(21, 13, 17, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(22, 61, 901, Direction::Horizontal, "check"));
    CHECK_NOTHROW(notebook.write(23, 16, 13, Direction::Horizontal, "check"));
    
    }
    
	//the bad cases
	TEST_CASE("bad cases:"){

	ariel::Notebook notebook;

	notebook.write(32, 36,1, Direction::Vertical, " ");
	CHECK(notebook.read(32,36,1, Direction::Vertical, 9) == "test fail");
	
	notebook.write(1, 10,12, Direction::Horizontal, " ");
	CHECK(notebook.read(1,10,12, Direction::Horizontal, 5) == "error");
	
	
	notebook.write(4000, 5000,5, Direction::Vertical, " ");
	CHECK(notebook.read(4000,5000, 5, Direction::Vertical, 9) == "failed");

    }