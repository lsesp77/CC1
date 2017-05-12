#include <iostream>

#include "Vec.h"

using namespace std;


void Vec::print(){

    start.print();

    finish.print();

}

void Vec::origin(){

   start.x=0;
   start.y=0;
   finish.x=0;
   finish.y=0;

}
