//
//  copyConstructor.cpp
//  Shallow Vs Deep Copy Example
//
//  Created by Ram Basnet on 1/31/16.
//  Copyright © 2016 Ram Basnet. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Test
{
public:
    int nums[2]; //array
    int *dyNums; //dynamic array
    Test()
    {
        nums[0] = 1;
        nums[1] = 1;
        dyNums = new int[2];
        dyNums[0] = 2;
        dyNums[1] = 2;
    }
    //copy constructor... lets you do the deep copy
    /*Test(const Test &otherObject)
     {
     dyNums = new int[2];
     for(int i=0; i<2; i++)
     dyNums[i] = otherObject.dyNums[i];
     }
     */
};

int main()
{
    Test a;
    cout << "nums of a: " <<  a.nums[0] << " " << a.nums[1] << endl;
    Test b = a; //member wise copy of data from a to b
    cout << "nums of b: " << b.nums[0] << " " << b.nums[1] << endl;
    cout << "b's nums values are modified" << endl;
    b.nums[0] = 100;
    b.nums[1] = 200;
    cout << "after b's nums values are modified" << endl;
    cout << "nums of b: " << b.nums[0] << " " << b.nums[1] << endl;
    cout << "nums of a: "<< a.nums[0] << " " << a.nums[1] << endl;
    cout << "above output shows deep copy of nums values from object a to object b." << endl;
    cout << " a and b have their own copy of nums variable and values. " << endl
    << "As a result when b's nums are modified a's nums are NOT modified!" << endl;
    
    cout << "dyNums of a: " << a.dyNums[0] << " " << a.dyNums[1] << endl;
    cout << "dyNums of b: " << b.dyNums[0] << " " << b.dyNums[1] << endl;
    cout << " dyNums modified in b " << endl;
    b.dyNums[0] = 100;
    b.dyNums[1] = 200;
    cout << "after b's dyNums are modified..." << endl;
    cout << "dyNums of b: " << b.dyNums[0] << " " << b.dyNums[1] << endl;
    cout << "dyNums of a: " << a.dyNums[0] << " " << a.dyNums[1] << endl;
    cout << "above output shows shallow copy of dyNums values from object a to object b." << endl;
    cout << " a and b have their own copy of dyNums variable, "
    << "BUT they both point to the same memory location and hence the same values. " << endl
    << "As a result when b's dyNums are modified a's dyNums are ALSO modified, which could lead to problems..." << endl;
    cout << "So for pointer variables we need to do deep copy" << endl;
    cout << "Uncomment copy constructor that copies deep copy of dynamic array dyNums" << endl;
    cout << "Rerun the program again and notice the difference..." << endl;
    
    cin.get();
    return 0;
}

