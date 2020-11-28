int convertFiveRec(int n)
{
    if (n == 0)
        return 0;
    int digit = n % 10;
    if (digit == 0)
        digit = 5;

    return convertFiveRec(n / 10) * 10 + digit;
}

int convertFive(int n)
{
    if (n == 0)
        return 5;
    else
        return convertFiveRec(n);
}