int TitForTat(int ID, int n, int SC[2], int *H) /*ID:自身のID, 現在のターンはn（0始まり）, SC[ID]:IDの現在の得点*/
{
    int t;
    if (n)
    {
        return 0;
    }
    else if (ID)
    {
        return *(H + 2 * (n - 1) + 1);
    }
    else
    {
        return *(H + 2 * (n - 1));
    }
}