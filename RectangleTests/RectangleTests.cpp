#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
    TEST_CLASS(RectangleUnitTests)
    {
    public:

        // Task 1: Test getPerimeter 
        TEST_METHOD(getPerimeter_Length5Width10_Returns30)
        {
            int length = 5;
            int width = 10;
            int expected = 30;  // Fixed from 25

            int actual = getPerimeter(&length, &width);

            Assert::AreEqual(expected, actual);
        }

        // Task 1: Test getArea
        TEST_METHOD(getArea_Length6Width8_Returns48)
        {
            int length = 6;
            int width = 8;
            int expected = 48;  // Fixed from 40    

            int actual = getArea(&length, &width);

            Assert::AreEqual(expected, actual);
        }

        // Task 2: setLength tests 
        TEST_METHOD(setLength_Input50_SetsLengthTo50)
        {
            int input = 50;
            int length = 0;

            setLength(input, &length);

            Assert::AreEqual(50, length);  // Fixed from 55
        }

        TEST_METHOD(setLength_Input1_SetsLengthTo1)
        {
            int input = 1;
            int length = 0;

            setLength(input, &length);

            Assert::AreEqual(1, length); 
        }

        TEST_METHOD(setLength_Input99_SetsLengthTo99)
        {
            int input = 99;
            int length = 0;

            setLength(input, &length);

            Assert::AreEqual(99, length);  
        }

        // Task 2: setWidth tests
        TEST_METHOD(setWidth_Input25_SetsWidthTo25)
        {
            int input = 25;
            int width = 0;

            setWidth(input, &width);

            Assert::AreEqual(25, width);  
        }

        TEST_METHOD(setWidth_Input1_SetsWidthTo1)
        {
            int input = 1;
            int width = 0;

            setWidth(input, &width);

            Assert::AreEqual(1, width);  
        }

        TEST_METHOD(setWidth_Input99_SetsWidthTo99)
        {
            int input = 99;
            int width = 0;

            setWidth(input, &width);

            Assert::AreEqual(99, width);  
        }
    };
}