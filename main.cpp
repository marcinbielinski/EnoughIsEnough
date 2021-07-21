#include <iostream>
#include <vector>
#include <map>

/*Given a list lst and a number N, create a new list that contains each number of lst at most N times without reordering.
For example if N = 2, and the input is [1,2,3,1,2,1,2,3], you take [1,2,3,1,2], drop the next [1,2]
since this would lead to 1 and 2 being in the result 3 times, and then take 3, which leads to [1,2,3,1,2,3].*/

std::vector<int> deleteNth(const std::vector<int>& arr, int n)
{
    std::vector<int> result;
    std::map<int, int> my_map;

    for (auto elem : arr)
    {
        if (my_map[elem] < n)
        {
            result.emplace_back(elem);
            my_map[elem]++;
        }
    }
    return result;
}

int main() {
    auto vec1 = deleteNth ({1,1,1,1},2);

    for (const auto& elem : vec1)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    auto vec2 = deleteNth ({20,37,20,21},1);

    for (const auto& elem : vec2)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    auto vec3 = deleteNth({1,1,3,3,7,2,2,2,2}, 3);

    for (const auto& elem : vec3)
    {
        std::cout << elem << ' ';
    }
    return 0;
}
