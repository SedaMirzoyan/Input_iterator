#include <iostream>
#include <stdexcept>
#include "Input_iterator.h"
#include "Vector.h"


int main()
{
    int n;
    std::cout << "Enter the number of elements\n";
    std::cin >> n;

    Vector<int> ob(n);
    ob.genElements();
    //ob.printVector();
    ob.getElement(2);

    for (Iterator<int> iter = ob.begin(); iter != ob.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }

    /*
    ob[3];
    ob[2] = 45;
    std::cout << "After operator []\n";
    ob.printVector();

    std::cout << "At\n";
    try
    {
        ob.at(2);
        ob.at(1) = 8;
        ob.at(-3);
    }
    catch (const std::out_of_range& err)
    {
        std::cout << "Out of range issue, incorrect index" << std::endl;
    }
    ob.printVector();

    Vector<int> ob_cp(ob);
    ob > ob_cp;

    Vector<int> ob1;
    ob1 = ob_cp;

    Vector<double> m_ob1(3);
    m_ob1 = std::move(Vector<double>(5));

    Vector<std::string> m_ob2 = std::move(Vector<std::string>(2));

    ob.pushBack(9);
    ob.printVector();
    std::cout << "after pushBack (current size is " << ob.getSize() << ", capacity is " << ob.getCapacity() << ")\n";
    ob.popBack();
    std::cout << "after popBack (current size = " << ob.getSize() << ", capacity is " << ob.getCapacity() << ")\n";
    ob.printVector();

    Vector<int> ob_empty;
    try
    {
        ob_empty.popBack();
    }
    catch (...)
    {
        std::cout << "Vector is empty";
    }

    std::cout << std::endl;

    std::cout << "erase second element\n";
    ob.erase(2);
    ob.printVector();
    */

    return 0;
}