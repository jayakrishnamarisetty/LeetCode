int missingNumber(int* nums, int numsSize)
{
	for(int i=0;i<numsSize-1;i++)
	{
		int j=i+1;
		int temp=nums[j];
		while(j>0 && temp<nums[j-1])
		{
				nums[j]=nums[j-1];
				j--;
		}
				nums[j]= temp;
	}
	int i;
for(i=0;i<numsSize;i++)
{
 if(nums[i]!=i)
 {
     return i;
 }
}
return i;
return 1;
}