// todo: add Zone2 and Zone3
const char* cmd[][2] = {
    {"power on", "07E7E"},
    {"power off", "07E7F"},

    {"input cd", "07A15"},
    {"input dvd", "07AC1"},
    {"input bd", "07AC8"},
    {"input netusb", "0F7F013FC0"},
    {"input usb",   "0F7F013FC0 0F7F0138C7"},
    {"input net",   "0F7F013FC0 0F7F0137C8"},
    {"input pc",    "0F7F013FC0 0F7F0136C9"}, 

    {"volume up", "07A1A"},
    {"volume down", "07A1B"}, 
    {"volume -45", "2306D"},
    {"volume -50", "23063"},
    {"volume -55", "23059"},

    {"mute on", "07EA2"},
    {"mute off", "07EA3"},

    {"sleep off", "07EB3"},
    {"sleep 120", "07EB4"},
    {"sleep 90", "07EB5"},
    {"sleep 60", "07EB6"},
    {"sleep 30", "07EB7"},

    {"dsp 7ch", "07EFF"},
    {"dsp 2ch", "07EC0"},
    {"dsp normal", "07EFD"},
    {"dsp straight", "07EE0"},
    {"dsp general", "07EFC"},

    {"memory 1", "07E35"},
    {"memory 2", "07E36"},
    {"memory 3", "07E37"},
    {"memory 4", "07E38"},
    {"memory 5", "07E39"},
    {"memory 6", "07E3A"},

    {"enhancer on", "07ED8"},
    {"enhancer off", "07ED9"},

    {"stop", "0F7F013DC2"},
    {"play", "0F7F013EC1"},
    {"next", "0F7F013CC3"},
    {"prev", "0F7F013BC4"},
    {"display", "0F7F0135CA"}
};

