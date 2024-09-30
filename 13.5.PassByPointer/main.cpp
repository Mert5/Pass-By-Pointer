#include <iostream>

void say_age(int* age);


int main(){

    int age{23};

    std::cout << "Before call : " << age << std::endl;
    say_age(&age);  // when you call, do not forget adress operator
    std::cout << "After call : " << age << std::endl;


    return 0;
}

void say_age(int* age){
    ++(*age);   // do not forget dereferencing the operator when you modify it.
    std::cout << "Your age is now : " << *age << std::endl;
}