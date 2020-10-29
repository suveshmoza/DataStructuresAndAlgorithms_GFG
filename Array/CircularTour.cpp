int tour(petrolPump p[], int n)
{
    int extra = 0, index = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        total += p[i].petrol - p[i].distance;
        extra += p[i].petrol - p[i].distance;
        if (extra < 0)
        {
            extra = 0;
            index = i + 1;
        }
    }
    if (total >= 0)
        return index;
    else
        return -1;
}