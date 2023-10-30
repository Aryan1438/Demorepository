for(i = 0; i < num; i++)
    {
        j=((num-1)-i);
        if(j==i || j<i)
        break;
        else
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }










    }