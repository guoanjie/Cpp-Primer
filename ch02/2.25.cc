int main()
{
    {
        int* ip, i, &r = i; // int *, int, int &
    }
    {
        int i, *ip = 0;     // int, int *
    }
    {
        int* ip, ip2;       // int *, int
    }
    return 0;
}
