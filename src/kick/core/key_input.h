//
//  key_input.h
//  UnitTest_KickCPP
//
//  Created by morten on 24/04/14.
//
//
#pragma once

#ifdef EMSCRIPTEN
#   include <SDL/SDL_keycode.h>
#else
#   include <SDL2/SDL_keycode.h>
#endif
#include <set>
#include <vector>
#include <initializer_list>

namespace kick {

    enum class Key{
        UNKNOWN = SDLK_UNKNOWN,//0,
        RETURN = SDLK_RETURN,//'\r',
        ESCAPE = SDLK_ESCAPE,//'\033',
        BACKSPACE = SDLK_BACKSPACE,//'\b',
        TAB = SDLK_TAB,//'\t',
        SPACE = SDLK_SPACE,//' ',
        EXCLAIM = SDLK_EXCLAIM,//'!',
        QUOTEDBL = SDLK_QUOTEDBL,//'"',
        HASH = SDLK_HASH,//'#',
        PERCENT = SDLK_PERCENT,//'%',
        DOLLAR = SDLK_DOLLAR,//'$',
        AMPERSAND = SDLK_AMPERSAND,//'&',
        QUOTE = SDLK_QUOTE,//'\'',
        LEFTPAREN = SDLK_LEFTPAREN,//'(',
        RIGHTPAREN = SDLK_RIGHTPAREN,//')',
        ASTERISK = SDLK_ASTERISK,//'*',
        PLUS = SDLK_PLUS,//'+',
        COMMA = SDLK_COMMA,//',',
        MINUS = SDLK_MINUS,//'-',
        PERIOD = SDLK_PERIOD,//'.',
        SLASH = SDLK_SLASH,//'/',
        NUM_0 = SDLK_0,//'0',
        NUM_1 = SDLK_1,//'1',
        NUM_2 = SDLK_2,//'2',
        NUM_3 = SDLK_3,//'3',
        NUM_4 = SDLK_4,//'4',
        NUM_5 = SDLK_5,//'5',
        NUM_6 = SDLK_6,//'6',
        NUM_7 = SDLK_7,//'7',
        NUM_8 = SDLK_8,//'8',
        NUM_9 = SDLK_9,//'9',
        COLON = SDLK_COLON,//':',
        SEMICOLON = SDLK_SEMICOLON,//';',
        LESS = SDLK_LESS,//'<',
        EQUALS = SDLK_EQUALS,//'=',
        GREATER = SDLK_GREATER,//'>',
        QUESTION = SDLK_QUESTION,//'?',
        AT = SDLK_AT,//'@',
        /*
           Skip uppercase letters
         */
        LEFTBRACKET = SDLK_LEFTBRACKET,//'[',
        BACKSLASH = SDLK_BACKSLASH,//'\\',
        RIGHTBRACKET = SDLK_RIGHTBRACKET,//']',
        CARET = SDLK_CARET,//'^',
        UNDERSCORE = SDLK_UNDERSCORE,//'_',
        BACKQUOTE = SDLK_BACKQUOTE,//'`',
        a = SDLK_a,//'a',
        b = SDLK_b,//'b',
        c = SDLK_c,//'c',
        d = SDLK_d,//'d',
        e = SDLK_e,//'e',
        f = SDLK_f,//'f',
        g = SDLK_g,//'g',
        h = SDLK_h,//'h',
        i = SDLK_i,//'i',
        j = SDLK_j,//'j',
        k = SDLK_k,//'k',
        l = SDLK_l,//'l',
        m = SDLK_m,//'m',
        n = SDLK_n,//'n',
        o = SDLK_o,//'o',
        p = SDLK_p,//'p',
        q = SDLK_q,//'q',
        r = SDLK_r,//'r',
        s = SDLK_s,//'s',
        t = SDLK_t,//'t',
        u = SDLK_u,//'u',
        v = SDLK_v,//'v',
        w = SDLK_w,//'w',
        x = SDLK_x,//'x',
        y = SDLK_y,//'y',
        z = SDLK_z,//'z',

        CAPSLOCK = SDLK_CAPSLOCK,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CAPSLOCK),

        F1 = SDLK_F1,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F1),
        F2 = SDLK_F2,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F2),
        F3 = SDLK_F3,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F3),
        F4 = SDLK_F4,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F4),
        F5 = SDLK_F5,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F5),
        F6 = SDLK_F6,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F6),
        F7 = SDLK_F7,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F7),
        F8 = SDLK_F8,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F8),
        F9 = SDLK_F9,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F9),
        F10 = SDLK_F10,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F10),
        F11 = SDLK_F11,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F11),
        F12 = SDLK_F12,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F12),

        PRINTSCREEN = SDLK_PRINTSCREEN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRINTSCREEN),
        SCROLLLOCK = SDLK_SCROLLLOCK,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SCROLLLOCK),
        PAUSE = SDLK_PAUSE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAUSE),
        INSERT = SDLK_INSERT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_INSERT),
        HOME = SDLK_HOME,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HOME),
        PAGEUP = SDLK_PAGEUP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEUP),
        DELETE = SDLK_DELETE,//'\177',
        END = SDLK_END,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_END),
        PAGEDOWN = SDLK_PAGEDOWN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PAGEDOWN),
        RIGHT = SDLK_RIGHT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RIGHT),
        LEFT = SDLK_LEFT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LEFT),
        DOWN = SDLK_DOWN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DOWN),
        UP = SDLK_UP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UP),

        NUMLOCKCLEAR = SDLK_NUMLOCKCLEAR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_NUMLOCKCLEAR),
        KP_DIVIDE = SDLK_KP_DIVIDE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DIVIDE),
        KP_MULTIPLY = SDLK_KP_MULTIPLY,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MULTIPLY),
        KP_MINUS = SDLK_KP_MINUS,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MINUS),
        KP_PLUS = SDLK_KP_PLUS,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUS),
        KP_ENTER = SDLK_KP_ENTER,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_ENTER),
        KP_1 = SDLK_KP_1,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_1),
        KP_2 = SDLK_KP_2,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_2),
        KP_3 = SDLK_KP_3,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_3),
        KP_4 = SDLK_KP_4,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_4),
        KP_5 = SDLK_KP_5,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_5),
        KP_6 = SDLK_KP_6,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_6),
        KP_7 = SDLK_KP_7,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_7),
        KP_8 = SDLK_KP_8,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_8),
        KP_9 = SDLK_KP_9,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_9),
        KP_0 = SDLK_KP_0,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_0),
        KP_PERIOD = SDLK_KP_PERIOD,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERIOD),

        APPLICATION = SDLK_APPLICATION,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_APPLICATION),
        POWER = SDLK_POWER,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_POWER),
        KP_EQUALS = SDLK_KP_EQUALS,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALS),
        F13 = SDLK_F13,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F13),
        F14 = SDLK_F14,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F14),
        F15 = SDLK_F15,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F15),
        F16 = SDLK_F16,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F16),
        F17 = SDLK_F17,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F17),
        F18 = SDLK_F18,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F18),
        F19 = SDLK_F19,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F19),
        F20 = SDLK_F20,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F20),
        F21 = SDLK_F21,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F21),
        F22 = SDLK_F22,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F22),
        F23 = SDLK_F23,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F23),
        F24 = SDLK_F24,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_F24),
        EXECUTE = SDLK_EXECUTE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXECUTE),
        HELP = SDLK_HELP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_HELP),
        MENU = SDLK_MENU,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MENU),
        SELECT = SDLK_SELECT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SELECT),
        STOP = SDLK_STOP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_STOP),
        AGAIN = SDLK_AGAIN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AGAIN),
        UNDO = SDLK_UNDO,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_UNDO),
        CUT = SDLK_CUT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CUT),
        COPY = SDLK_COPY,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COPY),
        PASTE = SDLK_PASTE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PASTE),
        FIND = SDLK_FIND,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_FIND),
        MUTE = SDLK_MUTE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MUTE),
        VOLUMEUP = SDLK_VOLUMEUP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEUP),
        VOLUMEDOWN = SDLK_VOLUMEDOWN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_VOLUMEDOWN),
        KP_COMMA = SDLK_KP_COMMA,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COMMA),
        KP_EQUALSAS400 =SDLK_KP_EQUALSAS400,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EQUALSAS400),

        ALTERASE = SDLK_ALTERASE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_ALTERASE),
        SYSREQ = SDLK_SYSREQ,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SYSREQ),
        CANCEL = SDLK_CANCEL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CANCEL),
        CLEAR = SDLK_CLEAR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEAR),
        PRIOR = SDLK_PRIOR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_PRIOR),
        RETURN2 = SDLK_RETURN2,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RETURN2),
        SEPARATOR = SDLK_SEPARATOR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SEPARATOR),
        OUT = SDLK_OUT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OUT),
        OPER = SDLK_OPER,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_OPER),
        CLEARAGAIN = SDLK_CLEARAGAIN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CLEARAGAIN),
        CRSEL = SDLK_CRSEL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CRSEL),
        EXSEL = SDLK_EXSEL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EXSEL),

        KP_00 = SDLK_KP_00,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_00),
        KP_000 = SDLK_KP_000,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_000),
        THOUSANDSSEPARATOR =SDLK_THOUSANDSSEPARATOR,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_THOUSANDSSEPARATOR),
        DECIMALSEPARATOR =SDLK_DECIMALSEPARATOR,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DECIMALSEPARATOR),
        CURRENCYUNIT = SDLK_CURRENCYUNIT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYUNIT),
        CURRENCYSUBUNIT =SDLK_CURRENCYSUBUNIT,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CURRENCYSUBUNIT),
        KP_LEFTPAREN = SDLK_KP_LEFTPAREN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTPAREN),
        KP_RIGHTPAREN = SDLK_KP_RIGHTPAREN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTPAREN),
        KP_LEFTBRACE = SDLK_KP_LEFTBRACE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LEFTBRACE),
        KP_RIGHTBRACE = SDLK_KP_RIGHTBRACE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_RIGHTBRACE),
        KP_TAB = SDLK_KP_TAB,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_TAB),
        KP_BACKSPACE = SDLK_KP_BACKSPACE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BACKSPACE),
        KP_A = SDLK_KP_A,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_A),
        KP_B = SDLK_KP_B,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_B),
        KP_C = SDLK_KP_C,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_C),
        KP_D = SDLK_KP_D,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_D),
        KP_E = SDLK_KP_E,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_E),
        KP_F = SDLK_KP_F,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_F),
        KP_XOR = SDLK_KP_XOR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_XOR),
        KP_POWER = SDLK_KP_POWER,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_POWER),
        KP_PERCENT = SDLK_KP_PERCENT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PERCENT),
        KP_LESS = SDLK_KP_LESS,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_LESS),
        KP_GREATER = SDLK_KP_GREATER,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_GREATER),
        KP_AMPERSAND = SDLK_KP_AMPERSAND,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AMPERSAND),
        KP_DBLAMPERSAND =SDLK_KP_DBLAMPERSAND,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLAMPERSAND),
        KP_VERTICALBAR =SDLK_KP_VERTICALBAR,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_VERTICALBAR),
        KP_DBLVERTICALBAR =SDLK_KP_DBLVERTICALBAR,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DBLVERTICALBAR),
        KP_COLON = SDLK_KP_COLON,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_COLON),
        KP_HASH = SDLK_KP_HASH,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HASH),
        KP_SPACE = SDLK_KP_SPACE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_SPACE),
        KP_AT = SDLK_KP_AT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_AT),
        KP_EXCLAM = SDLK_KP_EXCLAM,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_EXCLAM),
        KP_MEMSTORE = SDLK_KP_MEMSTORE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSTORE),
        KP_MEMRECALL = SDLK_KP_MEMRECALL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMRECALL),
        KP_MEMCLEAR = SDLK_KP_MEMCLEAR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMCLEAR),
        KP_MEMADD = SDLK_KP_MEMADD,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMADD),
        KP_MEMSUBTRACT =SDLK_KP_MEMSUBTRACT,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMSUBTRACT),
        KP_MEMMULTIPLY =SDLK_KP_MEMMULTIPLY,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMMULTIPLY),
        KP_MEMDIVIDE = SDLK_KP_MEMDIVIDE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_MEMDIVIDE),
        KP_PLUSMINUS = SDLK_KP_PLUSMINUS,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_PLUSMINUS),
        KP_CLEAR = SDLK_KP_CLEAR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEAR),
        KP_CLEARENTRY = SDLK_KP_CLEARENTRY,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_CLEARENTRY),
        KP_BINARY = SDLK_KP_BINARY,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_BINARY),
        KP_OCTAL = SDLK_KP_OCTAL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_OCTAL),
        KP_DECIMAL = SDLK_KP_DECIMAL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_DECIMAL),
        KP_HEXADECIMAL =SDLK_KP_HEXADECIMAL,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KP_HEXADECIMAL),

        LCTRL = SDLK_LCTRL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LCTRL),
        LSHIFT = SDLK_LSHIFT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LSHIFT),
        LALT = SDLK_LALT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LALT),
        LGUI = SDLK_LGUI,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_LGUI),
        RCTRL = SDLK_RCTRL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RCTRL),
        RSHIFT = SDLK_RSHIFT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RSHIFT),
        RALT = SDLK_RALT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RALT),
        RGUI = SDLK_RGUI,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_RGUI),

        MODE = SDLK_MODE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MODE),

        AUDIONEXT = SDLK_AUDIONEXT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIONEXT),
        AUDIOPREV = SDLK_AUDIOPREV,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPREV),
        AUDIOSTOP = SDLK_AUDIOSTOP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOSTOP),
        AUDIOPLAY = SDLK_AUDIOPLAY,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOPLAY),
        AUDIOMUTE = SDLK_AUDIOMUTE,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AUDIOMUTE),
        MEDIASELECT = SDLK_MEDIASELECT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MEDIASELECT),
        WWW = SDLK_WWW,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_WWW),
        MAIL = SDLK_MAIL,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_MAIL),
        CALCULATOR = SDLK_CALCULATOR,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_CALCULATOR),
        COMPUTER = SDLK_COMPUTER,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_COMPUTER),
        AC_SEARCH = SDLK_AC_SEARCH,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_SEARCH),
        AC_HOME = SDLK_AC_HOME,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_HOME),
        AC_BACK = SDLK_AC_BACK,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BACK),
        AC_FORWARD = SDLK_AC_FORWARD,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_FORWARD),
        AC_STOP = SDLK_AC_STOP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_STOP),
        AC_REFRESH = SDLK_AC_REFRESH,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_REFRESH),
        AC_BOOKMARKS = SDLK_AC_BOOKMARKS,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_AC_BOOKMARKS),

        BRIGHTNESSDOWN =SDLK_BRIGHTNESSDOWN,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSDOWN),
        BRIGHTNESSUP = SDLK_BRIGHTNESSUP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_BRIGHTNESSUP),
        DISPLAYSWITCH = SDLK_DISPLAYSWITCH,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_DISPLAYSWITCH),
        KBDILLUMTOGGLE =SDLK_KBDILLUMTOGGLE,//
        //        SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMTOGGLE),
        KBDILLUMDOWN = SDLK_KBDILLUMDOWN,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMDOWN),
        KBDILLUMUP = SDLK_KBDILLUMUP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_KBDILLUMUP),
        EJECT = SDLK_EJECT,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_EJECT),
        SLEEP = SDLK_SLEEP,//SDL_SCANCODE_TO_KEYCODE(SDL_SCANCODE_SLEEP)
    };

    struct KeyMapping {
    public:
        KeyMapping(std::initializer_list<Key> keys);
        KeyMapping(std::initializer_list<KeyMapping> alternatives);
        std::vector<Key> keys;
        std::vector<KeyMapping> alternatives;
    };

    class KeyInput {
    public:
        KeyInput();
        KeyInput(const KeyInput&) = delete;
        /// clear the frame specific properties
        void reset();
        bool down(Key button) const;
        bool pressed(Key button)  const;
        bool up(Key button) const;
        bool down(const KeyMapping& mapping) const;
        // if all keys in keymapping is pressed and at least one key is pressed down this frame)
        bool pressed(const KeyMapping& mapping)  const;

        void pressBegin(Key k);
        void pressEnd(Key k);
    private:
        std::set<Key> buttonDown;
        std::set<Key> buttonPressed;
        std::set<Key> buttonUp;
    };
}
