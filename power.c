/* power: raise base to n-th power; n>=0 */
/* This is the "old-style version"*/
power(10, 100);  /* declaring variables (integers) base and n inline */
int base, n;
{
    int i, p;
    p = 1;
    for(i = 1; i<= n; ++i)
    p = p * base;
    return p;
}
