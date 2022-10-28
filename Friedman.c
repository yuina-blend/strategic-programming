// 最初の一回は裏切る
// その後相手が一度でも裏切れば裏切り続けるが、
// 最初の裏切りによって相手が裏切りを選択するようになる可能性があるので、
// 2回目は相手の手に関わらず協力する
int Friedman(int ID, int n, int SC[2], int *H)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i < n; i++)
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