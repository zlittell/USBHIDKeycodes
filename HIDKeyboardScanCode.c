/// <summary>
/// Enum for keyboard scancodes.
/// </summary>
public enum HIDKeyboardScanCode
{
    /// <summary>No key pressed</summary>
    None = 0x00,

    /// <summary>Keyboard Error Roll Over ("Phantom Key")</summary>
    ErrorRollover = 0x01,

    /// <summary>Keyboard POST Fail</summary>
    ErrorPostFail = 0x02,

    /// <summary>Keyboard Error Undefined</summary>
    ErrorUndefined = 0x03,

    /// <summary>Keyboard a and A</summary>
    KeyA = 0x04,

    /// <summary>Keyboard b and B</summary>
    KeyB = 0x05,

    /// <summary>Keyboard c and C</summary>
    KeyC = 0x06,

    /// <summary>Keyboard d and D</summary>
    KeyD = 0x07,

    /// <summary>Keyboard e and E</summary>
    KeyE = 0x08,

    /// <summary>Keyboard f and F</summary>
    KeyF = 0x09,

    /// <summary>Keyboard g and G</summary>
    KeyG = 0x0a,

    /// <summary>Keyboard h and H</summary>
    KeyH = 0x0b,

    /// <summary>Keyboard i and I</summary>
    KeyI = 0x0c,

    /// <summary>Keyboard j and J</summary>
    KeyJ = 0x0d,

    /// <summary>Keyboard k and K</summary>
    KeyK = 0x0e,

    /// <summary>Keyboard l and L</summary>
    KeyL = 0x0f,

    /// <summary>Keyboard m and M</summary>
    KeyM = 0x10,

    /// <summary>Keyboard n and N</summary>
    KeyN = 0x11,

    /// <summary>Keyboard o and O</summary>
    KeyO = 0x12,

    /// <summary>Keyboard p and P</summary>
    KeyP = 0x13,

    /// <summary>Keyboard q and Q</summary>
    KeyQ = 0x14,

    /// <summary>Keyboard r and R</summary>
    KeyR = 0x15,

    /// <summary>Keyboard s and S</summary>
    KeyS = 0x16,

    /// <summary>Keyboard t and T</summary>
    KeyT = 0x17,

    /// <summary>Keyboard u and U</summary>
    KeyU = 0x18,

    /// <summary>Keyboard v and V</summary>
    KeyV = 0x19,

    /// <summary>Keyboard w and W</summary>
    KeyW = 0x1a,

    /// <summary>Keyboard x and X</summary>
    KeyX = 0x1b,

    /// <summary>Keyboard y and Y</summary>
    KeyY = 0x1c,

    /// <summary>Keyboard z and Z</summary>
    KeyZ = 0x1d,

    /// <summary>Keyboard 1 and !</summary>
    Key1 = 0x1e,

    /// <summary>Keyboard 2 and @</summary>
    Key2 = 0x1f,

    /// <summary>Keyboard 3 and #</summary>
    Key3 = 0x20,

    /// <summary>Keyboard 4 and $</summary>
    Key4 = 0x21,

    /// <summary>Keyboard 5 and %</summary>
    Key5 = 0x22,

    /// <summary>Keyboard 6 and ^</summary>
    Key6 = 0x23,

    /// <summary>Keyboard 7 and &amp;</summary>
    Key7 = 0x24,

    /// <summary>Keyboard 8 and *</summary>
    Key8 = 0x25,

    /// <summary>Keyboard 9 and (</summary>
    Key9 = 0x26,

    /// <summary>Keyboard 0 and )</summary>
    Key0 = 0x27,

    /// <summary>Keyboard Return (ENTER)</summary>
    KeyEnter = 0x28,

    /// <summary>Keyboard ESCAPE</summary>
    KeyESC = 0x29,

    /// <summary>Keyboard DELETE (Backspace)</summary>
    KeyBackspace = 0x2a,

    /// <summary>Keyboard Tab</summary>
    KeyTab = 0x2b,

    /// <summary>Keyboard Spacebar</summary>
    KeySpace = 0x2c,

    /// <summary>Keyboard - and _</summary>
    KeyMinus = 0x2d,

    /// <summary>Keyboard = and +</summary>
    KeyEqual = 0x2e,

    /// <summary>Keyboard [ and {</summary>
    KeyLeftBrace = 0x2f,

    /// <summary>Keyboard ] and }</summary>
    KeyRightBrace = 0x30,

    /// <summary>Keyboard \ and |</summary>
    KeyBackSlash = 0x31,

    /// <summary>Keyboard Non-US # and ~</summary>
    KeyHashTilde = 0x32,

    /// <summary>Keyboard ; and :</summary>
    KeySemicolon = 0x33,

    /// <summary>Keyboard ' and "</summary>
    KeyApostrophe = 0x34,

    /// <summary>Keyboard ` and ~</summary>
    KeyGrave = 0x35,

        /// <summary>Keyboard , and LESSTHAN &lt;</summary>
        KeyComma = 0x36,

        /// <summary>Keyboard . and ></summary>
        KeyPeriod = 0x37,

        /// <summary>Keyboard / and ?</summary>
        KeyForwardSlash = 0x38,

        /// <summary>Keyboard Caps Lock</summary>
        KeyCapslock = 0x39,

        /// <summary>Keyboard F1</summary>
        KeyF1 = 0x3a,

        /// <summary>Keyboard F2</summary>
        KeyF2 = 0x3b,

        /// <summary>Keyboard F3</summary>
        KeyF3 = 0x3c,

        /// <summary>Keyboard F4</summary>
        KeyF4 = 0x3d,

        /// <summary>Keyboard F5</summary>
        KeyF5 = 0x3e,

        /// <summary>Keyboard F6</summary>
        KeyF6 = 0x3f,

        /// <summary>Keyboard F7</summary>
        KeyF7 = 0x40,

        /// <summary>Keyboard F8</summary>
        KeyF8 = 0x41,

        /// <summary>Keyboard F9</summary>
        KeyF9 = 0x42,

        /// <summary>Keyboard F10</summary>
        KeyF10 = 0x43,

        /// <summary>Keyboard F11</summary>
        KeyF11 = 0x44,

        /// <summary>Keyboard F12</summary>
        KeyF12 = 0x45,

        /// <summary>Keyboard Print Screen</summary>
        KeyPrintScreen = 0x46,

        /// <summary>Keyboard Scroll Lock</summary>
        KeyScrollLock = 0x47,

        /// <summary>Keyboard Pause</summary>
        KeyPause = 0x48,

        /// <summary>Keyboard Insert</summary>
        KeyInsert = 0x49,

        /// <summary>Keyboard Home</summary>
        KeyHome = 0x4a,

        /// <summary>Keyboard Page Up</summary>
        KeyPageUp = 0x4b,

        /// <summary>Keyboard Delete Forward</summary>
        KeyDelete = 0x4c,

        /// <summary>Keyboard End</summary>
        KeyEnd = 0x4d,

        /// <summary>Keyboard Page Down</summary>
        KeyPageDown = 0x4e,

        /// <summary>Keyboard Right Arrow</summary>
        KeyRight = 0x4f,

        /// <summary>Keyboard Left Arrow</summary>
        KeyLeft = 0x50,

        /// <summary>Keyboard Down Arrow</summary>
        KeyDown = 0x51,

        /// <summary>Keyboard Up Arrow</summary>
        KeyUp = 0x52,

        /// <summary>Keyboard Num Lock and Clear</summary>
        KeyNPNumlock = 0x53,

        /// <summary>Keypad /</summary>
        KeyNPSlash = 0x54,

        /// <summary>Keypad *</summary>
        KeyNPAsterisk = 0x55,

        /// <summary>Keypad -</summary>
        KeyNPMinus = 0x56,

        /// <summary>Keypad +</summary>
        KeyNPPlus = 0x57,

        /// <summary>Keypad ENTER</summary>
        KeyNPEnter = 0x58,

        /// <summary>Keypad 1 and End</summary>
        KeyNP1 = 0x59,

        /// <summary>Keypad 2 and Down Arrow</summary>
        KeyNP2 = 0x5a,

        /// <summary>Keypad 3 and PageDn</summary>
        KeyNP3 = 0x5b,

        /// <summary>Keypad 4 and Left Arrow</summary>
        KeyNP4 = 0x5c,

        /// <summary>Keypad 5</summary>
        KeyNP5 = 0x5d,

        /// <summary>Keypad 6 and Right Arrow</summary>
        KeyNP6 = 0x5e,

        /// <summary>Keypad 7 and Home</summary>
        KeyNP7 = 0x5f,

        /// <summary>Keypad 8 and Up Arrow</summary>
        KeyNP8 = 0x60,

        /// <summary>Keypad 9 and Page Up</summary>
        KeyNP9 = 0x61,

        /// <summary>Keypad 0 and Insert</summary>
        KeyNP0 = 0x62,

        /// <summary>Keypad . and Delete</summary>
        KeyNPDOT = 0x63,

        /// <summary>Keyboard Non-US \ and |</summary>
        Key102ND = 0x64,

        /// <summary>Keyboard Application</summary>
        KeyCompose = 0x65,

        /// <summary>Keyboard Power</summary>
        KeyPower = 0x66,

        /// <summary>Keypad =</summary>
        KeyNPEqual = 0x67,

        /// <summary>Keyboard F13</summary>
        KeyF13 = 0x68,

        /// <summary>Keyboard F14</summary>
        KeyF14 = 0x69,

        /// <summary>Keyboard F15</summary>
        KeyF15 = 0x6a,

        /// <summary>Keyboard F16</summary>
        KeyF16 = 0x6b,

        /// <summary>Keyboard F17</summary>
        KeyF17 = 0x6c,

        /// <summary>Keyboard F18</summary>
        KeyF18 = 0x6d,

        /// <summary>Keyboard F19</summary>
        KeyF19 = 0x6e,

        /// <summary>Keyboard F20</summary>
        KeyF20 = 0x6f,

        /// <summary>Keyboard F21</summary>
        KeyF21 = 0x70,

        /// <summary>Keyboard F22</summary>
        KeyF22 = 0x71,

        /// <summary>Keyboard F23</summary>
        KeyF23 = 0x72,

        /// <summary>Keyboard F24</summary>
        KeyF24 = 0x73,

        /// <summary>Keyboard Execute</summary>
        KeyOpen = 0x74,

        /// <summary>Keyboard Help</summary>
        KeyHelp = 0x75,

        /// <summary>Keyboard Menu</summary>
        KeyMenu = 0x76,

        /// <summary>Keyboard Select</summary>
        KeySelect = 0x77,

        /// <summary>Keyboard Stop</summary>
        KeyStop = 0x78,

        /// <summary>Keyboard Again</summary>
        KeyAgain = 0x79,

        /// <summary>Keyboard Undo</summary>
        KeyUndo = 0x7a,

        /// <summary>Keyboard Cut</summary>
        KeyCut = 0x7b,

        /// <summary>Keyboard Copy</summary>
        KeyCopy = 0x7c,

        /// <summary>Keyboard Paste</summary>
        KeyPaste = 0x7d,

        /// <summary>Keyboard Find</summary>
        KeyFind = 0x7e,

        /// <summary>Keyboard Mute</summary>
        KeyMute = 0x7f,

        /// <summary>Keyboard Volume Up</summary>
        KeyVolumeUp = 0x80,

        /// <summary>Keyboard Volume Down</summary>
        KeyVolumeDown = 0x81,

        /// <summary>Keyboard Locking Caps Lock</summary>
        KeyCapsLockLocking = 0x82,

        /// <summary>Keyboard Locking Num Lock</summary>
        KeyNumLockLocking = 0x83,

        /// <summary>Keyboard Locking Scroll Lock</summary>
        KeyScrollLockLocking = 0x84,

        /// <summary>Keypad Brazilian Comma</summary>
        KeyBRComma = 0x85,

        /// <summary>Keyboard Brazilian Equal Sign</summary>
        KeyBREqual = 0x86,

        /// <summary>Keyboard International1</summary>
        KeyRo = 0x87,

        /// <summary>Keyboard International2</summary>
        KeyKatakanaHiragana = 0x88,

        /// <summary>Keyboard International3</summary>
        KeyYen = 0x89,

        /// <summary>Keyboard International4</summary>
        KeyHenken = 0x8a,

        /// <summary>Keyboard International5</summary>
        KeyMuhenkan = 0x8b,

        /// <summary>Keyboard International6</summary>
        KeyJPComma = 0x8c,

        // 0x8d  Keyboard International7
        // 0x8e  Keyboard International8
        // 0x8f  Keyboard International9

        /// <summary>Keyboard LANG1</summary>
        KeyHanguel = 0x90,

        /// <summary>Keyboard LANG2</summary>
        KeyHanja = 0x91,

        /// <summary>Keyboard LANG3</summary>
        KeyKatakana = 0x92,

        /// <summary>Keyboard LANG4</summary>
        KeyHiragana = 0x93,

        /// <summary>Keyboard LANG5</summary>
        KeyZenkakuHankaku = 0x94,

        // 0x95  Keyboard LANG6
        // 0x96  Keyboard LANG7
        // 0x97  Keyboard LANG8
        // 0x98  Keyboard LANG9
        // 0x99  Keyboard Alternate Erase
        // 0x9a  Keyboard SysReq/Attention
        // 0x9b  Keyboard Cancel
        // 0x9c  Keyboard Clear
        // 0x9d  Keyboard Prior
        // 0x9e  Keyboard Return
        // 0x9f  Keyboard Separator
        // 0xa0  Keyboard Out
        // 0xa1  Keyboard Oper
        // 0xa2  Keyboard Clear/Again
        // 0xa3  Keyboard CrSel/Props
        // 0xa4  Keyboard ExSel

        // 0xb0  Keypad 00
        // 0xb1  Keypad 000
        // 0xb2  Thousands Separator
        // 0xb3  Decimal Separator
        // 0xb4  Currency Unit
        // 0xb5  Currency Sub-unit

        /// <summary>Keypad (</summary>
        KeyNPLeftParentheses = 0xb6,

        /// <summary>Keypad )</summary>
        KeyNPRightParentheses = 0xb7,

        // 0xb8  Keypad {
        // 0xb9  Keypad }
        // 0xba  Keypad Tab
        // 0xbb  Keypad Backspace
        // 0xbc  Keypad A
        // 0xbd  Keypad B
        // 0xbe  Keypad C
        // 0xbf  Keypad D
        // 0xc0  Keypad E
        // 0xc1  Keypad F
        // 0xc2  Keypad XOR
        // 0xc3  Keypad ^
        // 0xc4  Keypad %
        // 0xc5  Keypad <
        // 0xc6  Keypad >
        // 0xc7  Keypad &
        // 0xc8  Keypad &&
        // 0xc9  Keypad |
        // 0xca  Keypad ||
        // 0xcb  Keypad :
        // 0xcc  Keypad #
        // 0xcd  Keypad Space
        // 0xce  Keypad @
        // 0xcf  Keypad !
        // 0xd0  Keypad Memory Store
        // 0xd1  Keypad Memory Recall
        // 0xd2  Keypad Memory Clear
        // 0xd3  Keypad Memory Add
        // 0xd4  Keypad Memory Subtract
        // 0xd5  Keypad Memory Multiply
        // 0xd6  Keypad Memory Divide
        // 0xd7  Keypad +/-
        // 0xd8  Keypad Clear
        // 0xd9  Keypad Clear Entry
        // 0xda  Keypad Binary
        // 0xdb  Keypad Octal
        // 0xdc  Keypad Decimal
        // 0xdd  Keypad Hexadecimal

        /// <summary>Keyboard Left Control</summary>
        KeyLeftControl = 0xe0,

        /// <summary>Keyboard Left Shift</summary>
        KeyLeftShift = 0xe1,

        /// <summary>Keyboard Left Alt</summary>
        KeyLeftAlt = 0xe2,

        /// <summary>Keyboard Left GUI</summary>
        KeyLeftMeta = 0xe3,

        /// <summary>Keyboard Right Control</summary>
        KeyRightControl = 0xe4,

        /// <summary>Keyboard Right Shift</summary>
        KeyRightShift = 0xe5,

        /// <summary>Keyboard Right Alt</summary>
        KeyRightAlt = 0xe6,

        /// <summary>Keyboard Right GUI</summary>
        KeyRightMeta = 0xe7,

        /// <summary>Keyboard Media Play/Plause</summary>
        MediaPlayPause = 0xe8,

        /// <summary>Keyboard Media StopCD</summary>
        MediaStopCD = 0xe9,

        /// <summary>Keyboard Media Previous</summary>
        MediaPrevious = 0xea,

        /// <summary>Keyboard Media Next</summary>
        MediaNext = 0xeb,

        /// <summary>Keyboard Media Eject CD</summary>
        MediaEjectCD = 0xec,

        /// <summary>Keyboard Media Volume UP</summary>
        MediaVolumeUp = 0xed,

        /// <summary>Keyboard Media Volume Down</summary>
        MediaVolumeDown = 0xee,

        /// <summary>Keyboard Media Mute</summary>
        MediaMute = 0xef,

        /// <summary>Keyboard Media WWW Web Browser</summary>
        MediaWWW = 0xf0,

        /// <summary>Keyboard Media Back</summary>
        MediaBack = 0xf1,

        /// <summary>Keyboard Media Forward</summary>
        MediaForward = 0xf2,

        /// <summary>Keyboard Media Stop</summary>
        MediaStop = 0xf3,

        /// <summary>Keyboard Media Find</summary>
        MediaFind = 0xf4,

        /// <summary>Keyboard Media Scroll Up</summary>
        MediaScrollUp = 0xf5,

        /// <summary>Keyboard Media Scroll Down</summary>
        MediaScrollDown = 0xf6,

        /// <summary>Keyboard Media Edit</summary>
        MediaEdit = 0xf7,

        /// <summary>Keyboard Media Sleep</summary>
        MediaSleep = 0xf8,

        /// <summary>Keyboard Media Coffee</summary>
        MediaCoffee = 0xf9,

        /// <summary>Keyboard Media Refresh</summary>
        MediaRefresh = 0xfa,

        /// <summary>Keyboard Media Calc</summary>
        MediaCalculator = 0xfb,
}