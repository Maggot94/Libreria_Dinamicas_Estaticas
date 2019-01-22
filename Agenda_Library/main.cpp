#include <iostream>
using namespace std;
#include "dllheadder.h"
namespace dllspec{
float dllclass::dlladd(float a, float b){
    float c;
    c= a+b;
    return c;
}
float dllclass::dllsub(float a, float b) {
    float c;
    c = a-b;

    return c;
}
}
