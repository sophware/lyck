const char* cmd[][2] = {

    {"volume -30", "2308B"},
    {"volume -35", "23081"},
    {"volume -40", "23077"},
    {"volume -45", "2306D"},
    {"volume -50", "23063"},
    {"volume -55", "23059"},
    {"volume -60", "2304F"},
    {"volume -65", "23045"},
    {"volume -70", "2303B"},
    {"volume -75", "23031"},
    {"volume -80", "23027"},

    {"memory 1", "07E35"},
    {"memory 2", "07E36"},
    {"memory 3", "07E37"},
    {"memory 4", "07E38"},
    {"memory 5", "07E39"},
    {"memory 6", "07E3A"},

    {"master volume up", "07A1A"},
    {"master volume down", "07A1B"},
    {"master volume +", "07A1A"},
    {"master volume -", "07A1B"},
    {"mute on", "07EA2"},
    {"mute off", "07EA3"},

    {"input bd", "07AC8"},
    {"input netusb", "0F7F013FC0"},
    {"input usb",   "0F7F013FC0 0F7F0138C7"},
    {"input net",   "0F7F013FC0 0F7F0137C8"},
    {"input pc",    "0F7F013FC0 0F7F0136C9"}, 

    {"input phono", "07A14"},
    {"input cd", "07A15"},
    {"input tuner", "07A16"},
    {"input cd-r", "07A19"},
    {"input mdtape", "07AC9"},
    {"input dvd", "07AC1"},
    {"input d-tvld", "07A54"},
    {"input cblsat", "07AC0"},
    {"input vcr1", "07A0F"},
    {"input vcr2dvr", "07A13"},
    {"input v-aux", "07A55"},
    {"input 6 chan on", "07EA4"},
    {"input 6 chan off", "07EA5"},
    {"input mode auto", "07EA6"},
    {"input mode dd", "07EA7"},
    {"input mode dts", "07EA8"},
    {"input mode digital", "07EA9"},
    {"input mode analog", "07EAA"},
    {"input mode aac", "07E3B"},


    {"power on", "07A1D"},
    {"power off", "07A1E"},
    {"main power on", "07E7E"},
    {"main power off", "07E7F"},

    {"z2 power on", "07EBA"},
    {"z2 power off", "07EBB"},

    {"z2 volume +", "07ADA"},
    {"z2 volume -", "07ADB"},
    {"z2 volume up", "07ADA"},
    {"z2 volume down", "07ADB"},
    {"z2 mute on", "07EA0"},
    {"z2 mute off", "07EA1"},
    {"z2 input phono", "07AD0"},
    {"z2 input cd", "07AD1"},
    {"z2 input tuner", "07AD2"},
    {"z2 input cd-r", "07AD3"},
    {"z2 input mdtape", "07ACF"},
    {"z2 input dvd", "07ACD"},
    {"z2 input d-tvld", "07AD9"},
    {"z2 input cblsat", "07ACC"},
    {"z2 input vcr1", "07AD6"},
    {"z2 input vcr2dvr", "07AD7"},
    {"z2 input v-aux", "07AD8"},

    {"z3 power on", "07AED"},
    {"z3 power off", "07AEE"},

    {"z3 mute on", "07E26"},
    {"z3 mute off", "07E66"},
    {"z3 volume +", "07AFD"},
    {"z3 volume -", "07AFE"},
    {"z3 volume up", "07AFD"},
    {"z3 volume down", "07AFE"},
    {"z3 input phono", "07AF1"},
    {"z3 input cd", "07AF2"},
    {"z3 input tuner", "07AF3"},
    {"z3 input cd-r", "07AF5"},
    {"z3 input mdtape", "07AF4"},
    {"z3 input dvd", "07AFC"},
    {"z3 input d-tvld", "07AF6"},
    {"z3 input cblsat", "07AF7"},
    {"z3 input vcr1", "07AF9"},
    {"z3 input vcr2dvr", "07AFA"},
    {"z3 input v-aux", "07AF0"},

    {"osd off", "07EB0"},
    {"osd short", "07EB1"},
    {"osd full", "07EB2"},
    {"sleep off", "07EB3"},
    {"sleep 120 min", "07EB4"},
    {"sleep 90 min", "07EB5"},
    {"sleep 60 min", "07EB6"},
    {"sleep 30 min", "07EB7"},
    {"exes on matrix", "07EB8"},
    {"exes off", "07EB9"},
    {"exes auto", "07E7C"},
    {"exes discrete", "07E7D"},
    {"night on", "07E9B"},
    {"night off", "07E9C"},
    {"effect on", "07E27"},
    {"stereo", "07EE0"},
    {"dsp hall a", "07EE1"},
    {"dsp hall b", "07EE2"},
    {"dsp hall c", "07EE3"},
    {"dsp live concert", "07EE6"},
    {"dsp freiburg", "07EE8"},
    {"dsp royaumont", "07EE9"},
    {"dsp village gate", "07EEA"},
    {"dsp bottom line", "07EEC"},
    {"dsp roxy theater", "07EED"},
    {"dsp arena", "07EEF"},
    {"dsp disco", "07EF0"},
    {"dsp game", "07EF2"},
    {"dsp 7ch stereo", "07EFF"},
    {"dsp poprock", "07EF3"},
    {"dsp classical", "07EF5"},
    {"dsp mono movie", "07EF7"},
    {"dsp var sports", "07EF8"},
    {"dsp spectacle", "07EF9"},
    {"dsp sci-fi", "07EFA"},
    {"dsp adventure", "07EFB"},
    {"dsp general", "07EFC"},
    {"dsp normal", "07EFD"},
    {"dsp enhanced", "07EFE"},
    {"dsp plii movie", "07E67"},
    {"dsp plii music", "07E68"},
    {"dsp neo6 cinema", "07E69"},
    {"dsp neo6 music", "07E6A"},
    {"dsp 2ch dir stereo", "07EC1"},
    {"dsp 2ch stereo", "07EC0"},
    {"dsp thx music", "07EC3"},
    {"tuner preset pg a", "07AE0"},
    {"tuner preset pg b", "07AE1"},
    {"tuner preset pg c", "07AE2"},
    {"tuner preset pg d", "07AE3"},
    {"tuner preset pg e", "07AE4"},
    {"tuner preset 1", "07AE5"},
    {"tuner preset 2", "07AE6"},
    {"tuner preset 3", "07AE7"},
    {"tuner preset 4", "07AE8"},
    {"tuner preset 5", "07AE9"},
    {"tuner preset 6", "07AEA"},
    {"tuner preset 7", "07AEB"},
    {"tuner preset 8", "07AEC"},
    {"tuner band fm", "07EBC"},
    {"tuner band am", "07EBD"},
    {"auto tuning up", "07EBE"},
    {"auto tuning down", "07EBF"},
    {"speaker relay a on", "07EAB"},
    {"speaker relay a off", "07EAC"},
    {"speaker relay b on", "07EAD"},
    {"speaker relay b off", "07EAE"},
    {"home preset mem a", "07E2B"},
    {"home preset mem b", "07E2C"},
    {"home preset mem c", "07E2D"},
    {"home preset mem d", "07E2E"},
    {"home preset mem e", "07E2F"},
    {"home preset mem f", "07E20"},
    {"home preset rcl a", "07E35"},
    {"home preset rcl b", "07E36"},
    {"home preset rcl c", "07E37"},
    {"home preset rcl d", "07E38"},
    {"home preset rcl e", "07E39"},
    {"home preset rcl f", "07E3A"},
    {"vol preset mem a", "07E6B"},
    {"vol preset mem b", "07E6C"},
    {"vol preset mem c", "07E6D"},
    {"vol preset mem d", "07E6E"},
    {"vol preset mem e", "07E6F"},
    {"vol preset mem f", "07E60"},
    {"vol preset rcl a", "07E75"},
    {"vol preset rcl b", "07E76"},
    {"vol preset rcl c", "07E77"},
    {"vol preset rcl d", "07E78"},
    {"vol preset rcl e", "07E79"},
    {"vol preset rcl f", "07E7A"},
    {"z2 vol memory a", "07E87"},
    {"z2 vol memory b", "07E88"},
    {"z2 vol memory c", "07E89"},
    {"z2 vol memory d", "07E8A"},
    {"z2 vol memory e", "07E8B"},
    {"z2 vol memory f", "07E8C"},
    {"z2 vol recall a", "07E8D"},
    {"z2 vol recall b", "07E8E"},
    {"z2 vol recall c", "07E8F"},
    {"z2 vol recall d", "07E90"},
    {"z2 vol recall e", "07E91"},
    {"z2 vol recall f", "07E92"},
    {"z3 vol memory a", "07E20"},
    {"z3 vol memory b", "07E21"},
    {"z3 vol memory c", "07E22"},
    {"z3 vol memory d", "07E23"},
    {"z3 vol memory e", "07E24"},
    {"z3 vol memory f", "07E25"},
    {"z3 vol recall a", "07E60"},
    {"z3 vol recall b", "07E61"},
    {"z3 vol recall c", "07E62"},
    {"z3 vol recall d", "07E63"},
    {"z3 vol recall e", "07E64"},
    {"z3 vol recall f", "07E65"},
    {"dc1 trig ctrl z1", "07E32"},
    {"dc1 trig ctrl z2", "07E33"},
    {"dc1 trig ctrl z3", "07E31"},
    {"zone 1 dc1 trig on", "07E71"},
    {"zone 1 dc1 trig off", "07E72"},
    {"zone 2 dc1 trig on", "07E73"},
    {"zone 2 dc1 trig off", "07E74"},
    {"zone 3 dc1 trig on", "07E83"},
    {"zone 3 dc1 trig off", "07E84"},
    {"dual mono main", "07E93"},
    {"dual mono sub", "07E94"},
    {"dual mono all", "07E95"},
    {"dc2 trig ctrl z1", "07E96"},
    {"dc2 trig ctrl z2", "07E97"},
    {"dc2 trig ctrl z3", "07E9F"},
    {"dc2 trig ctrl z or", "07E98"},
    {"zone 1 dc2 trig on", "07E3C"},
    {"zone 1 dc2 trig off", "07E3D"},
    {"zone 2 dc2 trig on", "07E3E"},
    {"zone 2 dc2 trig off", "07E3F"},
    {"zone 3 dc2 trig on", "07E85"},
    {"zone 3 dc2 trig off", "07E86"},
    {"speaker b zone 1", "07E28"},
    {"speaker b zone 2", "07E29"},
    {"z2 speaker out on", "07E99"},
    {"z2 speaker out off", "07E9A"},

    {"osd menu", "0F7F012FD0"},
    {"osd enter", "0F7F0131CE"},
    {"osd display", "0F7F0135CA"},
    {"osd up", "0F7F012ED1"},
    {"osd down", "0F7F0134CB"},
    {"osd left", "0F7F0132CD"},
    {"osd right", "0F7F0130CF"},

    {"enhancer on", "07ED8"},
    {"enhancer off", "07ED9"},

    {"stop", "0F7F013DC2"},
    {"play", "0F7F013EC1"},
    {"next", "0F7F013CC3"},
    {"prev", "0F7F013BC4"},

};
