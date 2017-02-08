#include <iostream>
using namespace std;

#define N 100

int g_array[N];     //存放输入的数字
static int count;   //存放元素的个数

// 初始化函数
void Initial()
{
    cout << "请输入元素的个数：";
    cin >> count;
    cout << "请输入" << count << "个元素：";
    for(int i = 0; i < count; i ++)
    {
        cin >> g_array[i];
    }
}

//合并函数
void Merge(int a[], int l, int m, int r)
{
    int i = l, j = m+1, k = l;
    int b[N];
    while(i <= m && j <= r)
    {
        if(a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    if(i > m)
    {
        for(int p = j; p <= r; p ++)
        {
            b[k++] = a[p];
        }
    }
    else
    {
        for(int p = i; p <= m; p ++)
        {
            b[k++] = a[p];
        }
    }

    //把b[]中排好的元素copy到a[]中
    for(int q = l; q <= r; q ++)
    {
        a[q] = b[q];
    }
}

//  归并排序 递归算法表示
void MergeSort(int a[], int left, int right)
{
    if(left < right)    //数组至少要有两个元素
    {
        int i = (right + left)/2;
        MergeSort(a, left, i);
        MergeSort(a, i+1, right);
        Merge(a, left, i, right); //把left到right的元素排序好
    }
}

//打印排好序的数组
void Print()
{
    cout << "经过MergeSort后：";
    for(int i = 0; i < count; i ++)
    {
        cout << g_array[i] << " ";
    }
    cout << endl;
}

int main()
{
    Initial();
    if(count > 1)
    {
        MergeSort(g_array, 0, count-1);
        Print();
    }
    else if(count == 1)
    {
        Print();
    }
    system("pause");
    return 0;
}