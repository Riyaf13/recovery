// the same thing but by using the malloc the only difference between the malloc and the new is that 
// malloc don't call the constructor 
// and in order to asigning the value it develop the function like set 
// and for deleting the space it not used the destructor it just used the free to empty the space 
// malloc allocates only raw memory; it does not call constructors, so objects must be initialized manually.
// raw memory means the uniniitalised memory 
// like heap is the clean unused plate to used to eat and raw meomery means unclean plate provide to eat.
// by default the data type of the malloc is void we have to do the type casting in order to return the data type of the pointer on the left side q 

#include <iostream>
#include <cstdlib>   // for malloc, free
using namespace std;

class emp
{
    int i;

public:
    emp() { }

    emp(int x)
    {
        i = x;
    }

    void set(int x)   // needed because malloc won't call constructor
    {
        i = x;
    }

    void show()
    {
        cout << "i = " << i << endl;
    }

    ~emp()
    {
        cout << "destructor" << endl;
    }
};

int main()
{
    emp* e1[3];   // array of pointers (stack)

    for(int j = 0; j < 3; j++)
    {
        e1[j] = (emp*) malloc(sizeof(emp));  // allocate raw memory
        e1[j]->set((j+1) * 10);              // manually initialize
    }

    for(int j = 0; j < 3; j++)
    {
        e1[j]->show();
    }

    for(int j = 0; j < 3; j++)
    {
        free(e1[j]);   // free memory (no destructor called)
    }
}

