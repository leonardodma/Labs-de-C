int process_pixel(int level, int brightness)
{
	int new_level;

	if (level + brightness <= 255)
	{
		new_level = level + brightness;
	}
	else{
		new_level = 255;
	}

	return new_level;
}
