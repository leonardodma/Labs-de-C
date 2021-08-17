

int process_pixel(int level, int parameter)
{
	int new_level;

	if (level < parameter)
	{
		new_level = 0;
	}
	else
	{
		new_level = 255;
	}

	return new_level;
}
