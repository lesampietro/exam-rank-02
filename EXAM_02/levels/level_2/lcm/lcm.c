unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int    g = (a > b) ? a : b;
    
    if(a == 0 || b == 0)
        return(0);
    while(1)
    {
        if((g % a == 0) && (g % b == 0))
            return(g);
        g++;
    }
}

/*int main(void)
{
    unsigned int a = 28;
    unsigned int b = 9;
    lcm(a, b);
    return(0);
}*/