
bool linear_search(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] == key)
			return true;
	}

	return false;
}

