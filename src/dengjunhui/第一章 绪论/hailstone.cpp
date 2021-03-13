#include <iostream>
/**冰雹序列

冰雹序列是由Collatz猜想提出的。
给出下列公式和初始的正整数值，生成的序列以1结束。

公式如下：

* 如果数字是偶数，除以2
* 如果数字是奇数，乘以3，再加上1
* 当数等于1时，退出程序

 */
int hailstone(int n){
    int length = 0;
    while(1<n){
        (n%2)?n=3*n+1:n=n/2;
        length++;
    }
    return length;
}
int main() {
    std::cout << hailstone(42) << std::endl;
    return 0;
}