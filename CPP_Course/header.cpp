#include<iostream>
std::string alpha ="a";
std::string Naam= "Sanjeev";
std::string title= "Kumar";
namespace name
{
    int x=5;
    int run(int x)
    {
        return x*x*x;
    }   
} // namespace name

int main()
{
    std::cout<< "Value of X:  " <<name::x <<std::endl;
    std::cout<<"Cube of 4 : "<< name::run<<std::endl;
    std::cout<<"Size of 1: " <<sizeof(1)<<std::endl;
    std::cout<<"Size of 1.2: " <<sizeof(1.2)<<std::endl;
    std::cout<<"Size of 0: " <<sizeof(0)<<std::endl;
    std::cout<<"Size of a: " <<alpha.size()<<std::endl;
    std::cout<<"Size of sanjeev: " <<Naam.size()<<std::endl;
    std::cout<<"Size of kumar: " <<title.size()<<std::endl;
    std::cout<<"Size of 12312346964683616611646304647687: " <<sizeof(123)<<std::endl;
    return 0; 
}