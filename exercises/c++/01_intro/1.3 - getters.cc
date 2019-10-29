//## Getters
//- write a function `get_int` that reads from stdin until a valid number is fed
//- write a function `get_double` that reads from stdin until a valid number is fed.
//
//*Hints*: 
//You can keep reading from stdin using one of two statements
//```
//while(std::cin >> i)
//```
//or
//```
//while(!(std::cin >> i))
//```
//what is the difference?
//
//After a wrong input you have to clear the error flag from `std::cin`  calling
//```
//std::cin.clear();
//```
//and ignore what just read
//```
//std::cin.ignore();
//``

#include<iostream>

/// Reads std::cin until a valid integer is inserted
int get_int(){
	int ret;
	while(! (std::cin >> ret)){
		std::cin.clear();
		std::cin.ignore();
	}
	return ret;
}

int main(){
	get_int();
}
