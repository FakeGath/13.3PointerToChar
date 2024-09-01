#include <iostream>

int main(){

    const char* p_message{"Hello world!!!"};

    std::cout<<"The message is: "<<p_message<<std::endl;
    std::cout<<"The pointer is: "<<&p_message<<std::endl;
    
}