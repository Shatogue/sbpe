// python functions that are callable from C

extern "Python" void hook_DoEvents();
extern "Python" void hook_Clear(uint32_t color);
extern "Python" void hook_Present();
extern "Python" void hook_GetWindowSize(int *width, int *height);
extern "Python" void hook_TrackGAEvent(char *category, char *action, char *label, double value);

extern "Python" void hook_mouseMove(int x, int y, void *userData);
extern "Python" void hook_mouseButton(int x, int y, int button, int down, void *userData);

extern "Python" void hook_LoadTextureFile(const char *textureFilename, XDL_LoadTextureDoneCallback callback, void *userData);
extern "Python" void hook_textureCallback(unsigned int texture, void *sheetPtr);
