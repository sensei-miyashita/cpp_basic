#include <iostream>

int global = 0;
int global2 = 0;
int global3 = 0;

void nest()
{
    int nested = 1;
    int nested2 = 1;
    int nested3 = 1;
    std::cout << "nested: " << &nested << std::endl;
    std::cout << "nested2: " << &nested2 << std::endl;
    std::cout << "nested3: " << &nested3 << std::endl;
}

void test()
{
    int local = 1;
    nest();
    int local2 = 1;
    int local3 = 1;
    int* heap = new int(2);
    std::cout << "global: " << &global << std::endl;
    std::cout << "global2: " << &global2 << std::endl;
    std::cout << "global3: " << &global3 << std::endl;
    std::cout << "local : " << &local << std::endl;
    std::cout << "local2 : " << &local2 << std::endl;
    std::cout << "local3 : " << &local3 << std::endl;
    std::cout << "heap  : " << heap << std::endl;

    delete heap;
}

int main()
{
    test();
    std::cout << "test function address: " << (void*)&test << std::endl;
    std::cout << "nest function address: " << (void*)&nest << std::endl;
    std::cout << "main function address: " << (void*)&main << std::endl;
}
