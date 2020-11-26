
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