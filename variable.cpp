#include <cstdio>
// so this is a basic coding tutorial series. we will begin with variables, the basis of pretty much all programing.
//
// A varible can take the form of many different types. 
// Int - Integer
// Float - Floating Point Integer
// Bool - Boolean
// Char - Character
// Short - Shortened Integer
// ... and more
//
// These varibles take up different amounts of size within the code
// Int = 8 bytes
// Float = 8 bytes
// Bool = 1 bit
// Char = 1 byte
// Short = 2 bytes
//
// one byte = eight bits
// So for a char that means within the code there are 8 bits 00000000
// the values of char can be from 00000000 -> 11111111 
// Or in base 10 instead of base 2: 0->255 (therefore 256 total values)
// this is how memory is stored through the computer.
//Memory adress | value
//00              00000000 = 0
//01              11111111 = 255
//02              00000010 = 2
//03              00000000 = 0
//04              00000001 = 1
//05              00000000 = 0
//06              00001001 = 9
//07              00000000 = 0
//
//so when we are declaring a varible... lets call it a char for ease
//
//Roughly C++
//
//char a = 10
//char b = 4;
//char c;
//
//Roughly machine info
//Memory | Values
//00     | 00000000 = 0
//01     | 00000011 = 3
//02     | 00000000 = 0
//...    | ............
//a's    | 00001010 = 10
//b's    | 00000100 = 4
//c's    | 00000000 = 0 // notice if no given value, it uses what is already there
//
//So if you see here, when you create a variable it creates a memory adress that is unique to the varible. and if you write to it, it changes the value at that adress.
//So the value in memory is the value 
//and the adress is called the pointer to the value.
//
//So if you want to get the pointer to a value, you can call it with a *
//like the following line
//int * int_pointer;
//
//
//Now the asterisk (*) can be a pointer to a single varible, or to a list of many values. However, on its own it does not have a value
// if you want to get the pointer to a value. (remember that is the memory adress to the variable and not the varible itself.)
// you use the &.
// 
//    example 
//    int test = 100;
//    int *pp = &test;
//
// 
//Now you might be wondering why pp is declared as a pointer. This is dependent as we talked about at the start on Type. 
//Just like int, float, bool, char. Each of those types also has a pointer type. that means *char is not the same as char. 
//
//    example
//    int test = 100;
//    int pp = &test;
//
//This code would fail, because you cannot cast from a regular int to a *int. 
//The exact error would be:
//  Error: invalid conversion between from 'int*' to 'int'
//
//
//
// 
//Remember this, the pointer and the value stuff will come up later. 
//
//
//
int test_pointer()
{
  int test_int = 100;
  int *int_pointer;
  int_pointer = &test_int;
  printf("The pointer to the value: %i\nThe first value following the pointer: %i", int_pointer, int_pointer[0]);
  return 0;
}

int main()
{
  test_pointer();
}
