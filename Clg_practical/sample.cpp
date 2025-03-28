int search(int* nums, int numsSize, int target)
{
    int low,high;
    int i;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            return nums[mid];
        }
        else if(nums[mid]>target)
        {
            high=mid-1;    
        }
        else if(nums[mid]<target)
        {
            low=mid+1;;
        }
    }
    return -1;
}

int main()
{
    int num[5];
    int numSize;
    int target;
    int i;
    printf("Enter the array elements:\n");
    scanf("%d",&num[i]);
    printf("Enter the teaget value");
    scanf("%d",&target);
    printf("Target element found at %d", search());
    return 0;
}
