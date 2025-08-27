int main() {
    int n, i, rem, sum, num;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        num = i; sum = 0;
        while (num > 0) {
            rem = num % 10;
            sum += rem * rem * rem;  // ? use += instead of =
            num /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}
