#include <iostream>
#include <string>
int main()
{
    char in_char{'x'};
    char temp_char;
    std::string out_str{""};
    int a{0};
    int b{1};
 // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {
        std::cout<<in_char<<std::endl;
        b=1;
        if(std::isalpha(in_char)==false)
        {
            //std::cout<<"Not alphbet!"<<std::endl;
            //break;
        

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
                    b = 3;
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
                    b = 4;
                    break;
            
            
                default:
                    // Do nothing
                    break;
            }
        }
        else out_str += std::toupper( in_char );
        //std::cout<<"a : "<<a<<" str lst length : "<<out_str.size()<<std::endl;
        //std::cout<<"out str : "<<out_str<<" a th compnent : "<<out_str[a]<<std::endl;
        if(b==1)
        {
            std::cout<<out_str[a]<<std::endl;
            //std::cout<<out_str[a]<<std::endl;
        }
        else
        {
            for(int i = 0; i < b; ++i)
            {
                std::cout<<out_str[a+i];
            }
            std::cout<<std::endl;
        }
        a = a + b;
        
        // - Convert to upper case
        // - Change numbers to words
        // - Ignore any other (non-alpha) characters
        // - In each case, add result to a string variable
    }
    // print out the new string
}