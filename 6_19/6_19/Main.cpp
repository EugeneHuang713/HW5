#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sumFrequency[13] = { 0 }; // 用來儲存每個點數和出現的次數 (2到12)
    int die1, die2, sum;
    int rolls = 36000;

    // 初始化隨機數種子
    srand(time(0));

    // 模擬投擲兩個骰子36,000次
    for (int i = 0; i < rolls; i++) {
        die1 = rand() % 6 + 1; // 第一顆骰子的點數 (1到6)
        die2 = rand() % 6 + 1; // 第二顆骰子的點數 (1到6)
        sum = die1 + die2;     // 計算兩個骰子的點數和
        sumFrequency[sum]++;   // 計數該點數和的出現次數
    }

    // 顯示每個點數和的出現次數
    printf("Sum Frequency Distribution:\n");
    for (int i = 2; i <= 12; i++) {
        printf("Sum %2d: %d times\n", i, sumFrequency[i]);
    }

    return 0;
}
