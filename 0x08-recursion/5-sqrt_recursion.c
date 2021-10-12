#include "main.h"
/**
 * _sqrt_recursion - find square root of number
 * @x: number entered
 * Return: square root
 */

int _sqrt_recursion(int n)
{
    int start = 0, end = n, mid, ans;

    while (start <= end)
    {
	mid = (start + end) / 2;

	if (mid * mid == n)
	{
	    ans = mid;
	    break;
	}
	if (mid * mid < n)
	{
	    ans=start;
	    start = mid + 1;
	}
	else
	{
	    end = mid - 1;
	}
    }
    return ans;
}
