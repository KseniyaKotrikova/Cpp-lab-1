bool checkPrime(unsigned int value)  //�������� ����� �� ��������
{
	if (value == 2)
		return true;
	else
	{
		int remainder = 0;
		for (unsigned int i = 2; i < value; i++)
		{
			remainder = (value % i);
			if (remainder == 0)
				return false;
		}
		return true;
	}
}



unsigned long long nPrime(unsigned n)  //���������� n-��� �������� ����� (� ����)
{
	int count = 0;
	int findPrime = 1;
	for (findPrime; count < n;)
	{
		findPrime++;
		if (checkPrime(findPrime))
			count++;
	}
	return findPrime;
}


unsigned long long nextPrime(unsigned long long value)  //���������� ���������� ���������� �������� ����� � value
{
	int count = 0;
	int nextPrime = value + 1;
	while (!checkPrime(nextPrime))
		nextPrime++;
	return nextPrime;
}
