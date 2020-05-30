#include "Сlass.h"

void* Class::operator new(size_t size)
{
    void *mem = std::malloc(size);
    //std::cout << "new" << std::endl;
    if (mem == nullptr)
    {
        std::bad_alloc e;
       // std::cout << "memory can't be allocated" << std::endl;
        throw e;
    }
    else
        return mem;
}

void Class::operator delete(void *ptr)
{
    free(ptr);
}

void* Class::operator new[](size_t size)
{
    void *mem = std::malloc(size);
   // std::cout << "new" << std::endl;
    if (mem)
        return mem;
    else
    {
        std::bad_alloc e;
        //std::cout << "memory can't be allocated" << std::endl;
        throw e;
    }
}

void Class::operator delete[](void *ptr)
{
    free(ptr);
}

void* Class::operator new(size_t size, void *ptr)
{
    return ptr;
}

void* Class::operator new[](size_t size, void *ptr)
{
    return ptr;
}

void* operator new(size_t size, const std::nothrow_t& nth) noexcept
{
    void *ptr = malloc(size);
    return ptr;
}

void* operator new[](size_t size, const std::nothrow_t& nth) noexcept
{
    void *ptr = malloc(size);
    return ptr;
}
