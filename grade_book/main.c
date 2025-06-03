char score_to_let_grade(int score) {
    char let = 0;
    if (90 <= score && score <= 100) let = 'A';
    else if (80 <= score && score <= 90) let = 'B';
    else if (70 <= score && score <= 80) let = 'C';
    else if (60 <= score && score <= 70) let = 'D';
    else if (0 <= score && score <= 60) let = 'F';
    return let;
}

char get_grade(int a, int b, int c) {
    return score_to_let_grade((a + b + c) / 3);
}

int main(void) {
    char data = get_grade(95,  90,  93);
    return 0;
}
