//Toggle the asterisk after the compiler error report to comment/uncomment blocks
/*BASE PROGRAM (this one compiles)

compiler error:
	NONE
	
*/// toggle the asterisk to comment/uncomment the block
#include<iostream>
int someotherfunc(){
	
	return 7;
}
int main(){
	
	int theNumber = someotherfunc();
	
	std::cout<<"theNumber is "<<theNumber<<std::endl;
}
//---------------------------------*/

//- do not put the `main` function
/*do not put the `main` function

compiler error:
/usr/lib/gcc/x86_64-pc-cygwin/7.4.0/../../../../lib/libcygwin.a(libcmain.o): In function `main':
/usr/src/debug/cygwin-3.0.7-1/winsup/cygwin/lib/libcmain.c:37: undefined reference to `WinMain'
/usr/src/debug/cygwin-3.0.7-1/winsup/cygwin/lib/libcmain.c:37:(.text.startup+0x7f): relocation truncated to fit: R_X86_64_PC32 against undefined symbol `WinMain'
collect2: error: ld returned 1 exit status

/// toggle the asterisk to comment/uncomment the block

#include<iostream>
int someotherfunc(){
	
	return 7;
}
//---------------------------------*/

/*typos in function name (e.g., `c0ut`)

compiler error:
1.1 - fugcc.cc: In function ‘int main()’:
1.1 - fugcc.cc:52:7: error: ‘crout’ is not a member of ‘std’
  std::crout<<"theNumber is "<<theNumber<<std::endl;
       ^~~~~
1.1 - fugcc.cc:52:7: note: suggested alternative: ‘cout’
  std::crout<<"theNumber is "<<theNumber<<std::endl;
       ^~~~~
       cout

/// toggle the asterisk to comment/uncomment the block
#include<iostream>
int someotherfunc(){
	
	return 7;
}
int main(){
	
	int theNumber = someotherfunc();
	
	std::crout<<"theNumber is "<<theNumber<<std::endl;
}
//---------------------------------*/

/*typos in variable name

compiler error:
1.1 - fugcc.cc: In function ‘int main()’:
1.1 - fugcc.cc:78:30: error: ‘theNAMBA’ was not declared in this scope
  std::cout<<"theNumber is "<<theNAMBA<<std::endl;
                              ^~~~~~~~

/// toggle the asterisk to comment/uncomment the block
#include<iostream>
int someotherfunc(){
	
	return 7;
}
int main(){
	
	int theNumber = someotherfunc();
	
	std::cout<<"theNumber is "<<theNAMBA<<std::endl;
}
//---------------------------------*/

/*forget to put `;`

compiler error:
$ g++ 1.1\ -\ fugcc.cc
1.1 - fugcc.cc: In function ‘int someotherfunc()’:
1.1 - fugcc.cc:95:1: error: expected ‘;’ before ‘}’ token
 }
 ^

/// toggle the asterisk to comment/uncomment the block
#include<iostream>
int someotherfunc(){
	
	return 7
}
int main(){
	
	int theNumber = someotherfunc();
	
	std::cout<<"theNumber is "<<theNumber<<std::endl;
}
//---------------------------------*/

/*forget to `#include <iostream>

compiler error:
1.1 - fugcc.cc: In function ‘int main()’:
1.1 - fugcc.cc:122:7: error: ‘cout’ is not a member of ‘std’
  std::cout<<"theNumber is "<<theNumber<<std::endl;
       ^~~~
1.1 - fugcc.cc:122:46: error: ‘endl’ is not a member of ‘std’
  std::cout<<"theNumber is "<<theNumber<<std::endl;
                                              ^~~~

/// toggle the asterisk to comment/uncomment the block
int someotherfunc(){
	
	return 7;
}
int main(){
	
	int theNumber = someotherfunc();
	
	std::cout<<"theNumber is "<<theNumber<<std::endl;
}
//---------------------------------*/

/*declare a variable with illegal name like `int double {0};`
/*do not put the `main` function

compiler error:
1.1 - fugcc.cc: In function ‘int main()’:
1.1 - fugcc.cc:146:6: error: expected unqualified-id before ‘delete’
  int delete = someotherfunc();
      ^~~~~~
1.1 - fugcc.cc:148:33: error: expected primary-expression before ‘<<’ token
  std::cout<<"delete is "<<delete<<std::endl;
                                 ^~

/// toggle the asterisk to comment/uncomment the block
#include<iostream>
int someotherfunc(){
	
	return 7;
}
int main(){
	
	int delete = someotherfunc();
	
	std::cout<<"delete is "<<delete<<std::endl;
}
//---------------------------------*/
