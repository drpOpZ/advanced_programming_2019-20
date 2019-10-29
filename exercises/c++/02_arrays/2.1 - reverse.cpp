//## Reverse order
//
//- Write a program that reads from stdin the length of an array and
//  then store in it the numbers given from stdin. The program should
//  then prints the numbers in **reverse order**. Remember to properly
//  free the used memory. You should divide the problem in two parts:
//
//  1. Write one **template** function that allocates on the *heap* one
//    array of a given size, initialize its elements and returns the
//    pointer to the first element.
//
//  2. Write a **template** function that prints the elements of an
//    array in the reverse order.
//
//- Test with integers and doubles.
//
//- Use `std::size_t`.
//
//  ​
//
//*Hints*: 
//
//- If you have to pass an array to a function, pass the pointer to its first element and the size of the array.
//
//
//- Remember to check your code with `valgrind`. If you  have a MAC you might have bad surprises. Run `valgrind` on a **Linux**  system. Alternatively, compile your code with the flags
//
//  `-g -fsanitize=address`  and then run your executable.

// NOTICE THAT memory leaks are a run-time problem, once the program terminates leaks are "fixed" by the OS
#include<iostream>

/// Allocate an array of type T and given size,
/// then ask the user to populate its elements one at a time
template<class T>
T* allocateArray(const std::size_t &arrSize){
	
	T* arr = new T[arrSize];
	
	uint32_t initialized = 0;
	while(initialized<arrSize){
		
		try{
			std::cout<<"A["<<initialized<<"]:"<<std::flush;
			std::cin>>arr[initialized];
			
		}
		catch(...){
			std::cout<<"Huh? Try again!"<<std::endl;
			std::cin.clear();
			std::cin.ignore();
			continue;
		}
		initialized++;
	}
	
	return arr;
}

/// prints an array of given type and size in reverse order
template<class T>
void printReverseArray(T* arr, std::size_t size){
	for(std::size_t iii=0; iii<size; iii++){
		std::cout<<arr[size-1-iii]<<std::endl;
	}
	
}

int main(){
	
	std::size_t size = 0;
	
	while(size<1){
		try{
			std::cout<<"Hello! Please enter the size of the array: "<<std::flush;
			std::cin>>size;
		}
		catch(...){
			std::cout<<"what was that?"<<size<<std::flush;
			std::cin.clear();
			std::cin.ignore();
		}
	}
	std::cout<<"Array A will have size "<<size<<"! Now, for its elements..."<<std::endl;
	auto arr = allocateArray<int>(size);
	
	//reverse print
	printReverseArray<int>(arr,size);
	
	delete arr;
	
}