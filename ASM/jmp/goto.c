int main()
{
    int a = 0;
before:
    a += 1;
    a -= 1;
    goto before;

}
