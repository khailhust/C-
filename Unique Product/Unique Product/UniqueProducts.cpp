#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

std::string firstUniqueProduct(const std::vector<std::string>& products)
{
    std::string result = "There is no unique products";
    for (size_t i = 0; i < products.size(); ++i)
    {
        int count = 0;
        for (size_t j = 0; j < products.size(); ++j)
        {
            if (products[i] == products[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            result = products[i];
            break;
        }
    }
    return result;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> products = { "Apple", "Computer", "Apple", "Bag" };
    std::cout << firstUniqueProduct(products);
}
#endif
