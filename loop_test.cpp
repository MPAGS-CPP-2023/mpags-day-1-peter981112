#include <iostream>
#include <string>
int main()
{
    char in_char{'x'};
    char temp_char;
    std::string out_str{""};
    int a{0};
    int b{0};
 // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {
        
        if(std::isalpha(in_char)==false)
        {
            //std::cout<<"Not alphbet!"<<std::endl;
            //break;
        
        //std::cout<<std::toupper(in_char)<<std::endl;
        

        //temp_char = toupper( in_char );
        //std::cout<<temp_char<<std::endl;
        switch (in_char)
        {
            case '0':
                out_str += "ZERO";
                b = 4;
                break;
            case '1':
                out_str += "ONE";
                b = 3;
                break;
            case '2':
                out_str += "TWO";
                b = 4;
                break;
            case '3':
                out_str += "THREE";
                b = 5;
                break;
            case '4':
                out_str += "FOUR";
                b = 4;
                break;
            case '5':
                out_str += "FIVE";
                b = 4;
                break;
            case '6':
                out_str += "SIX";
                b = 3;
                break;
            case '7':
                out_str += "SEVEN";
                b = 5;
                break;
            case '8':
                out_str += "EIGHT";
                b = 5;
                break;
            case '9':
                out_str += "NINE";
                break;
            
            
            default:
                // Do nothing
                break;
        }
        }
        out_str += std::toupper( in_char );

        std::cout<<out_str[a]<<std::endl;
        a++;
        
        // - Convert to upper case
        // - Change numbers to words
        // - Ignore any other (non-alpha) characters
        // - In each case, add result to a string variable
    }
    // print out the new string
}