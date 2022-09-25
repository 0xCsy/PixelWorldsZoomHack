//Version 1.7.21

static zoomHackLevel = 1;

// UnityEngine.Screen
int (*old_Screen_get_height)();
int Screen_get_height()
{
	return old_Screen_get_height() * zoomHackLevel;
}

// UnityEngine.Screen
int (*old_Screen_get_width)();
int Screen_get_width()
{
	return old_Screen_get_width() * zoomHackLevel;
}

