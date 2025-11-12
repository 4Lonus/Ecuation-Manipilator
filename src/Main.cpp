#include <iostream>
#include <string>
#include "Util/Out.h"
#include "Numbers/Number.h"
#include "Numbers/Integer.h"

using namespace std;

int main() {
    Integer* i = new Integer(5);
    
    i->print();

    return 0;
}