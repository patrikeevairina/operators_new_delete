#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <iostream>

template <typename T>
class Allocator
{
private:
    size_t _size;

public:
    Allocator(){}
    Allocator(size_t size);

    size_t size();

    T* allocate(size_t size);
    void deallocate(T *ptr, size_t size);
};

template <typename T>
Allocator<T>::Allocator(size_t size)
{
    _size = size;
}

template <typename T>
size_t Allocator<T>::size()
{
    return _size;
}

template <typename T>
T* Allocator<T>::allocate(size_t size)
{
    if (size > _size)
        throw std::bad_alloc();
    else
        return new T[size];
}

template <typename T>
void Allocator<T>::deallocate(T *ptr, size_t size)
{
    delete ptr;
}

#endif // ALLOCATOR_H
