#ifndef CLASS_H
#define CLASS_H
#include <iostream>
//#include <new>


class Class
{
public:
    void* operator new(size_t size);
    void* operator new[](size_t size);
    void* operator new(size_t size, void* ptr);
    void* operator new[](std::size_t size, void* ptr);
    void* operator new(size_t size, const std::nothrow_t& nth) noexcept;
    void* operator new[](size_t size, const std::nothrow_t& nth) noexcept;


    void operator delete(void *ptr);
    void operator delete[](void *ptr);
};

#endif // CLASS_H
