#include <iostream>
#include <Allocator.h>
#include <class.h>

using namespace std;

int main()
{
    Class *cl = new Class;
    delete cl;
    
    Class *cl_arr = new Class[10];
    delete[] cl_arr;
    
    Allocator<int> alloc(15);
    int *smth = alloc.allocate(10);
    alloc.deallocate(smth, 10);
    
    return 0;
}
