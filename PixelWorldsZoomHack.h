//Version 1.7.21

//Use this inside a slider
static int zoomHackLevel = 1;

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

// Call the hook inside the hack thread
hook((void *) getAddress(0x1ECB910), (void *)Screen_get_height, (void **)&old_Screen_get_height);
hook((void *) getAddress(0x1ECB8C8), (void *)Screen_get_width, (void **)&old_Screen_get_width);
