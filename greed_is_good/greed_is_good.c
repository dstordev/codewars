int get_one(const int num) {
    int mult = 10;
    if (num == 1) mult *= 10;
    return num * mult;
}

int score(const int dice[5]) {
    int i, score = 0;
    int count[7] = {0};

    // Считаем стороны
    for (i = 0; i < 5; i++) count[dice[i]]++;

    // Подсчитываем очки
    for (i = 1; i < 7; i++)
        if (count[i] >= 3) {
            score += get_one(i) * 10;
            count[i] -= 3;
        }
    score += get_one(5) * count[5];
    score += get_one(1) * count[1];

    return score;
}
