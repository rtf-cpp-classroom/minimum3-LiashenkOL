#pragma once




float findMinValue(float n1, float n2, float n3)
{
	float min = 0.0f;
	
	//TODO: write your code here
	
	float num[3];
	num[0] = n1;
	num[1] = n2;
	num[2] = n3;

	min = num[0];

	for (int i = 0; i < 3; ++i)
	{
		if (num[i] < min)
		{
			min = num[i];
		}

	}

	cout << "Min is: " << min << endl;
	return min;
}
