#include <iostream>
using namespace std;

// 冒泡排序函数  总结：当数组名传入到函数作为参数时，被退化为指向首元素的指针
void bubbleSort(int *arr, int len) // int * arr 也可以写为int arr[]
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// 打印数组函数
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[11] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5,88};
    int len = sizeof(arr) / sizeof(int);
    bubbleSort(arr, len);
    printArray(arr, len);
    system("pause");
    return 0;
}