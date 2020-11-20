double my_pow(double x, int y)
{
    double result = 1;
    bool flag = y > 0;
    y = abs(y);
    while (y) {
        if (y % 2 == 0) {
            y /= 2;
            x *= x;
        }
        else {
            y--;
            if (flag)
                result *= x;
            else
                result /= x;
        }
    }
    return result;
}