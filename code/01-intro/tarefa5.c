int process_pixel(int level, int factor)
{
	int new_level;

	if (level * factor <= 255)
	{
		new_level = level * factor;
	}
	else{
		new_level = 255;
	}

	return new_level;
}