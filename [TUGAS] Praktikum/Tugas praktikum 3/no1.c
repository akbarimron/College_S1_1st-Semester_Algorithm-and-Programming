int a,b,c;
int main() {
    int na = 98;
    char index;

    if (a > 80 && a <=100) {
        index = 'A';
    } else if (a > 70)
    {
        index = 'B';
    } else if (a > 60) {
        index = 'C';
    } else if (a >= 40) {
        index = 'D';
    } else {
        index = 'E';
    }
    printf("%c\n", index);
}