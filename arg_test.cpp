#include <vector>
#include <string>
#include <iostream>

int main(int argc, char* argv[])
{ 
    int a{0};
    //std::cout<<"argc : "<<argc<<" argv 1 : "<<argv[1]<<std::endl;
    const std::vector<std::string> cmdLineArgs { argv, argv+argc }; //convert arguments
    a = cmdLineArgs.size();

    for(int i=1; i<a; i++)
    {
        //std::cout << i << " th arg is : " << cmdLineArgs[i] <<std::endl; //for testing
        if(cmdLineArgs[i] == "-h" || cmdLineArgs[i] == "--help")  //for arg help -h or --help
        {
            std::cout << "This is your help message. This program processes command line arguments" <<std::endl;
        }
        else if(cmdLineArgs[i] == "-v" || cmdLineArgs[i] == "--version")  //for arg version -v or --version
        {
            std::cout << "version : 0.1  further version in development" <<std::endl;
        }
        else if(cmdLineArgs[i] == "-o" || cmdLineArgs[i] == "--output_file")  //for arg output file -o or --output_file not completely implimented
        {
            std::cout << "Loading output file......" <<std::endl;
        }
        else if(cmdLineArgs[i] == "-i" || cmdLineArgs[i] == "--input_file")   //for arg input file -i or --input_file not completely implimented
        {
            std::cout << "Loading input file......" <<std::endl;
        }
        else
        {
            std::cout << "Sorry but there is nothing to be done for option : "<< cmdLineArgs[i]<<" please try something else"<<std::endl;
        }
    }



}