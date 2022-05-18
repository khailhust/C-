/*
You are given two paper strips. On each strip, numbers (1, 2, ... N) are written in random order. Cut the original paper strip into several pieces and rearrange those pieces to form the desired sequence.
Write a function that, efficiently with respect to time used, returns the minimum number of cut pieces needed to perform the described operation.
For example, the following code should display 3 because the pieces used should be (1), (4, 3), and (2):
std::vector<int> original = { 1, 4, 3, 2 };
std::vector<int> desired = { 1, 2, 4, 3 };
std::cout << PaperStrip::minPieces(original, desired) << std::endl;
*/

#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>

int minPieces(const std::vector<int>& original, const std::vector<int>& desired)
{
    int countCuts = original.size() - 1;
    int length = original.size();

    for (int i = 0; i < length;)
    {
        int lengSubArr = 0;
        int start = 0;
        for (int j = 0; j < length; ++j)
        {
            if (original[i] == desired[j])
            {
                start = j;
            }
        }

        while (original[i] == desired[start])
        {
            lengSubArr++;
            ++i;
            ++start;
            if (start >= length || i >= length)
            {
                break;
            }
        }
        countCuts -= (lengSubArr - 1);
    }

    return countCuts;
}

#ifndef RunTests
int main()
{
    std::vector<int> original = { 1, 4, 3, 2 };
    std::vector<int> desired = { 1, 2, 4, 3 };
    /*std::vector<int> original = { 1, 3, 5, 2, 9, 4, 6, 8, 7};
    std::vector<int> desired = { 5, 2, 4, 6, 8, 3, 7, 1, 9 };*/
    std::cout << "min = " << minPieces(original, desired) << std::endl;
}
#endif
