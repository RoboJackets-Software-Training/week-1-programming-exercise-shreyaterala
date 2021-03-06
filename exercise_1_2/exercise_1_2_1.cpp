#include <iostream>
#include <vector>

int main()
{
    // Part 1: Vector Reversal

    // Input vector from command-line
    std::vector<int> list;
    int input = 0;
    std::cout << "Input List Of Numbers (end list with non-integer):" << std::endl;
    while (std::cin >> input)
    {
        list.push_back(input);
    }

    // Print original vector
    std::cout << "Original Vector: ";
    for (int v : list)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Reverse Vector
    // WRITE YOUR VECTOR REVERSAL HERE
    int start = 0;
    int end = list.size() - 1;
    int temp;
    while (start < end)
    {
        temp = list[start];
        list[start] = list[end];
        list[end] = temp;
        start++;
        end--;
    }
    // Print the Reversed vector
    std::cout << "Reversed Vector: ";
    for (int v : list)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
