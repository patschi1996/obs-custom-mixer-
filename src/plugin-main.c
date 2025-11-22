#include <obs-module.h>

OBS_DECLARE_MODULE();
OBS_MODULE_USE_DEFAULT_LOCALE("obs-custom-mixer", "en-US");

const char *obs_module_name(void)
{
    return "OBS Custom Mixer";
}

const char *obs_module_description(void)
{
    return "Test-Plugin – Basis für den Custom Audio Mixer.";
}

bool obs_module_load(void)
{
    blog(LOG_INFO, "[obs-custom-mixer] Plugin geladen");
    return true;
}

void obs_module_unload(void)
{
    blog(LOG_INFO, "[obs-custom-mixer] Plugin entladen");
}
