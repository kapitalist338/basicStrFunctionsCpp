#include <iostream>
#include <string>
#include <cstring>

int main(int argc, const char * argv[]){
    std::string somestr = "Hello World!";
    std::string somestr2 = "My name is Lev";
    std::cout << "The source string --> " << " \"" << somestr << "\" " << std::endl;
    std::cout << "The source string number 2 --> " << " \"" << somestr2<< "\" " << std::endl;
    somestr.push_back('!');
    std::cout<<"Adding the symbol \"!\" in the end of the first string --> " << somestr << std::endl;
    somestr2.push_back('!');
    std::cout<<"Adding the symbol \"!\" in the end of the second string --> " << somestr2 << std::endl;
    somestr.pop_back();
    std::cout << "Delete the last symbol of string 1 --> " << somestr << std::endl;
    somestr2.pop_back();
    std::cout << "Delete the last symbol of string 2 --> " << somestr2 << std::endl;
    std::cout << "The first string + string 2 --> " << somestr.append(somestr2) << std::endl;
}
