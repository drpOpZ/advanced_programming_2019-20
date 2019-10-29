// ## uniq
// - Write a simple version of the Unix program `uniq -c`, which, when fed with a text, outputs the same text with **consecutive** identical lines collapsed to one prepended with the number of repetitions
// 
// *Hints*: you can scan the stdin as follows
// ```
// std::string line;
// while(std::getline(std::cin,line))
// {...}
// ```
// or
// ```
// for(std::string line; std::getline(std::cin,line);)
// {...}
// ```
// What do you think it is better? Why?
// 
// Remember that if you type directly from stdin, you should press `Ctr+D` to close the stdin without interrupting the program. Moreover, you can redirect the content of a text to stdin trough the `<` operator
// ```
// ./a.out <a_file
// ```
// 
// You can compare strings with the `==` operator
// ```
// std::string s1;
// std::string s2;
// ...
// if(s1 == s2)
// if(s1 != s2)

#include<iostream>
#include<string>

int main(){

	std::string prev{""}, fresh{""};
	uint32_t count{1};
	
	// attempt to get the first line
	if(std::getline(std::cin, prev)){
		
		//read ahead
		while(std::getline(std::cin, fresh)){
			
			//on match increase counter and continue
			if(fresh==prev){
				count++;
			}
			//otherwise print, then reset counter and refresh inLine
			else{
				std::cout<<"\t"<<count<<" "<<prev<<std::endl;
				count = 1;
				prev = fresh;
			}
		}
	}
	//print what's left
	std::cout<<"\t"<<count<<" "<<prev<<std::endl;
}
