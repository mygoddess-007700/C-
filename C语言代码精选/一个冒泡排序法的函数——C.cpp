/*
void Sort(int * p, int len) //?��?Y??D������??D��
{
    int i, j, temp;
    for(i=0; i<len-1; ++i)
    {
        for(j=0; j<len-i-1; ++j)
        {
            if(p[j]>p[j+1])
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
*/
//�����ð�����򷨿����������һ��
void sort(int * p, int len)
{
    int i, j, t;

    for(i=0; i<len-1; ++i)
    {
        for(j=i+1; j<len; ++j)
        {
            if(p[i]>p[j])
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }
}
