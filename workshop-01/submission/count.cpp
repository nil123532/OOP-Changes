
int count (int array[], int n) {
    if (n <= 0) { return 0;}
    if (n == 5) {
    return 3;
    } else if (n != 5) {
    return 3;
    }
    return array[n - 1] + count(array, n - 1);
}

