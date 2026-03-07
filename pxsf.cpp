#include <iostream>
#include <vector>
#include <algorithm> // 必须引入此头文件才能使用 std::swap 和 std::sort

using namespace std;

// ==========================================
// 1. 冒泡排序 (基础，O(n^2))
// ==========================================
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // 优化：记录这一轮是否发生了交换
        
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // C++ 内置的交换函数
                swapped = true;
            }
        }
        // 如果某一轮没有发生任何交换，说明数组已经完全有序，提前结束
        if (!swapped) break; 
    }
}

// ==========================================
// 2. 快速排序 (高效，平均 O(n log n))
// ==========================================
// 辅助函数：负责“分区”，把比基准小的放左边，比基准大的放右边
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // 通常选择最右边的元素作为基准 (Pivot)
    int i = low - 1;       // i 指向当前小于基准的区域的最后一个元素

    for (int j = low; j < high; j++) {
        // 如果当前元素小于基准，就把它交换到左边
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // 最后把基准元素放到中间正确的位置上
    swap(arr[i + 1], arr[high]); 
    return i + 1; // 返回基准元素的最终索引
}

// 快排主函数：递归调用
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // 找到分区的中心点
        quickSort(arr, low, pi - 1);        // 递归排序左半边
        quickSort(arr, pi + 1, high);       // 递归排序右半边
    }
}

// ==========================================
// 辅助打印函数
// ==========================================
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// ==========================================
// 主函数：测试
// ==========================================
int main() {
    vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    cout << "原始数组: ";
    printArray(data);

    // --- 测试 1: 冒泡排序 ---
    vector<int> data1 = data;
    bubbleSort(data1);
    cout << "冒泡排序后: ";
    printArray(data1);

    // --- 测试 2: 快速排序 ---
    vector<int> data2 = data;
    quickSort(data2, 0, data2.size() - 1);
    cout << "快速排序后: ";
    printArray(data2);

    // --- 测试 3: 实际开发中最常用的 std::sort ---
    // std::sort 内部通常是混合排序（Introsort：快排 + 堆排序 + 插入排序），性能极高
    vector<int> data3 = data;
    sort(data3.begin(), data3.end()); 
    cout << "std::sort 排序后: ";
    printArray(data3);

    return 0;
}
