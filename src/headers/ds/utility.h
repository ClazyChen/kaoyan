// 一些常用的函数的定义

#ifndef UTILITY_H
#define UTILITY_H

// 交换两个元素
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// 复制数组 dst[0:size:step] = src[0:size:step]
template <typename T>
void arrayCopy(T* dst, T* src, int size, int step = 1) {
    if (step > 0) {
        for (int i = 0; i < size; i += step) {
            dst[i] = src[i];
        }
    } else {
        for (int i = size-1; i >= 0; i += step) {
            dst[i] = src[i];
        }
    }
}

// 获取两个数的中点
int mid(int lo, int hi) {
    return lo + (hi - lo) >> 1;
}

// 获取两个数的Fibonacci点（黄金分割点）
// 这里用0.625去模拟0.618，重复计算的hi - lo会被编译器自动优化
int goldenSection(int lo, int hi) {
    return lo + (hi - lo) >> 2 + (hi - lo) >> 3;
}


#endif