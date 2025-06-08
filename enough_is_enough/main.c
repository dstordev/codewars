#include <stdio.h>
#include <stdlib.h>

int *delete_nth(size_t szin, const int order[szin], int max_e, size_t *szout) {
    int *array = malloc(szin * 2 * sizeof(int));
    size_t size_array = 0;

    int *out_array = malloc(szin * sizeof(int));

    // Проходимся по заданным числам
    for (size_t i = 0; i < szin; i++) {
        const int num = order[i];
        int count_num = 0;
        size_t num_i = size_array;

        // Поиск числа в запомненных
        for (size_t i2 = 0; i2 < size_array;) {
            if (array[i2] == num) {
                count_num = array[i2 + 1];
                num_i = i2;
                break;
            }
            i2 += 2;
        }

        count_num++;

        // Если кол-во числа в запомненных меньше максимального кол-ва
        if (count_num <= max_e) {
            array[num_i + 1] = count_num;
            if (num_i == size_array) {
                array[num_i] = num;
                size_array += 2;
            }
            out_array[*szout] = num;
            (*szout)++;
        }
    }
    free(array);
    return out_array;
}

int main(void) {
    const int order[8] = {1, 2, 3, 1, 2, 1, 2, 3};
    int max_e = 2;
    size_t szout = 0;

    int *result = delete_nth(8, order, max_e, &szout);
    for (int i = 0; i < szout; i++) {
        printf("%i,", result[i]);
    }

    free(result);
    return 0;
}
