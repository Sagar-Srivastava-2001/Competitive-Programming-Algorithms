// Iterative Way......

bool binary_search(int arr[],int n,int key)
{
	int l = 0;
	int r = n-1;

	while(l<=r)
	{
		if(arr[mid] == key)
			return true;

		else if(arr[mid] > key)
			r = mid - 1;

		else
			l = mid + 1;
	}

	return false;
}

// Recursive Way........

bool binary_search(int arr[],int l,int r,int key)
{
    if(l<=r)
    {
        int mid = (l+r)/2;

        if(arr[mid] == key)
            return true;

        else if(arr[mid] > key)
            return binary_search(arr,l,mid-1,key);

        else
            return binary_search(arr,mid+1,r,key);
    }

    return false;
}
