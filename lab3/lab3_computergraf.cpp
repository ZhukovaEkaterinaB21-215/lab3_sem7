#pragma once
#include "pixel.h"
#include "testfirst.h"
#include "testsecond.h"
#include "testthird.h"
#include "testfourth.h"

using namespace cv;
using namespace std;

int main() 
{
    //������� 1
    int t1 = test1();
    if (t1 == 0)
    {
        printf("\nFirst test passed");
    }
    else
    {
        printf("\nFirst test failed");
    }

    //�������2
    int t2 = test2();
    if (t2 == 0)
    {
        printf("\nSecond test passed");
    }
    else
    {
        printf("\nSecond test failed");
    }

    //�������3
    int t3 = test3();
    if (t3 == 0)
    {
        printf("\nThird test passed");
    }
    else
    {
        printf("\nThird test failed");
    }

    //�������4
    int t4 = test4();
    if (t4 == 0)
    {
        printf("\nFourth test passed");
    }
    else
    {
        printf("\nFourth test passed");
    }
   
    return 0;
}
