int txt_size() {
    return 0;
}

int main()
{
    unsigned buf_size = 1024;
    {
        // int ia[buf_size];
    }
    {
        int ia[4 * 7 - 14];
    }
    {
        // int ia[txt_size()];
    }
    {
        // char st[11] = "fundamental";
    }
    return 0;
}
