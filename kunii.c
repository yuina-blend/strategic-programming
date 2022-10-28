int p(int ID, int n, int SC[2], int *H) {
    if (ID == 0) {
        if (*(H + 2 * (n - 2) + 1) == 1 && *(H + 2 * (n - 1) + 1) == 1)
            return 1;
        else
            return 0;
    }

    else {
        if (*(H + 2 * (n - 2)) == 1 && *(H + 2 * (n - 1)) == 1)
            return 1;
        else
            return 0;
    }
}
