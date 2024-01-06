int factorial(int num) {
    return (num == 1) ? 1 : num * factorial(num - 1);
}