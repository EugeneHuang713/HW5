#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sumFrequency[13] = { 0 }; // �Ψ��x�s�C���I�ƩM�X�{������ (2��12)
    int die1, die2, sum;
    int rolls = 36000;

    // ��l���H���ƺؤl
    srand(time(0));

    // �������Y��ӻ�l36,000��
    for (int i = 0; i < rolls; i++) {
        die1 = rand() % 6 + 1; // �Ĥ@����l���I�� (1��6)
        die2 = rand() % 6 + 1; // �ĤG����l���I�� (1��6)
        sum = die1 + die2;     // �p���ӻ�l���I�ƩM
        sumFrequency[sum]++;   // �p�Ƹ��I�ƩM���X�{����
    }

    // ��ܨC���I�ƩM���X�{����
    printf("Sum Frequency Distribution:\n");
    for (int i = 2; i <= 12; i++) {
        printf("Sum %2d: %d times\n", i, sumFrequency[i]);
    }

    return 0;
}
