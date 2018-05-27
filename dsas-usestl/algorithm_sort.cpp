
#include "usestl.h"
#include <vector>
#include <algorithm>
#include <cstdlib>

/*!
 * @brief ����qsort�ıȽϺ���
 *
 */
int cmp(const void* aa, const void* bb)
{
    int a = *(int*)aa;
    int b = *(int*)bb;
    if (a < b) return -1;
    else if (b < a) return 1;
    return 0;
}

/*!
 * @brief �����㷨
 *
 */
void algorithm_sort(void)
{
    PutTitle("\nAlgorithm sort begin.\n");

    int arr[] = {2, 5, 1, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    std::vector<int> vec(arr, arr + size);

    // �����顢vector����
    std::sort(arr, arr + size);
    std::qsort(arr, size, sizeof(int), cmp);
    std::sort(vec.begin(), vec.end(), [](int a, int b)->bool{return a > b;});

    // ���
    PutTitle("arr:\n");
    for (int k = 0; k < size; k ++)
        PutContent(arr[k] << ' ');
    PutTitle("\nvec:\n");
    for (int k = 0; k < size; k ++)
        PutContent(vec[k] << ' ');

    PutTitle("\nAlgorithm sort end.\n");
}
