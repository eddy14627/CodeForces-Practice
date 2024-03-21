#include <iostream>
#include <set>

int main()
{
    long long n;
    std::cin >> n;

    long long sum = n * (n + 1) / 2;

    if (sum % 2)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }

    sum = sum / 2;
    std::set<long long> array;

    for (long long i = 1; i <= n; ++i)
    {
        array.insert(i);
    }

    std::set<long long> array2;
    long long cnt = 0;

    for (long long i = n; i > 0; --i)
    {
        if (sum - i >= 0)
        {
            sum = sum - i;
            array2.insert(i);
            ++cnt;
            array.erase(i);
        }
    }

    if (sum > 0)
    {
        ++cnt;
        array2.insert(sum);
        array.erase(sum);
    }

    std::cout << "YES" << std::endl;
    std::cout << cnt << std::endl;

    for (long long i : array2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << n - cnt << std::endl;

    for (long long i : array)
    {
        std::cout << i << " ";
    }

    return 0;
}
