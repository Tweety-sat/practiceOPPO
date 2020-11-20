double my_pow(double x, int y)
{
    double result = 1;
    for (int i = 0; i < abs(y); ++i)
    {
        if (y > 0)
            result *= x;
        else
            result /= x;
    }
    return result;
}