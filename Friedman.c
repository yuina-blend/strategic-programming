int Friedman(int ID, int n, int SC[2], int *H)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (ID == 0)
            {
                if (*(H + 2 * i + 1) == 1)
                {
                    return 1;
                }
            }
            else if (ID == 1)
            {
                if (*(H + 2 * i) == 1)
                {
                    return 1;
                }
            }
        } //一度でも裏切ったら以降すべて裏切る
        return 0;
    }
}