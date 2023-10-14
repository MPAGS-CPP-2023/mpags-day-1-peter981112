#include <iostream>
int main()
{
 // This is a comment
 /* This is a
 Multiline comment */
    double a = 12.312;
    const double b{17.5212};
    b = 16.523;
    double my_var = 0;
    my_var = a*b;
    std::cout << "my var : "<<my_var<<std::endl;
}