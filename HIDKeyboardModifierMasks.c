    using System;

    /// <summary>
    /// Masks for modifier byte on USB HID Keyboard.
    /// </summary>
    [Flags]
    public enum HIDKeyboardModifierMasks
    {
        /// <summary>No Modifier OR Mask</summary>
        None = 0x00,

        /// <summary>Left Control OR Mask</summary>
        LeftControl = 0x01,

        /// <summary>Left Shift OR Mask</summary>
        LeftShift = 0x02,

        /// <summary>Left Alt OR Mask</summary>
        LeftAlt = 0x04,

        /// <summary>Left Meta OR Mask</summary>
        LeftMeta = 0x08,

        /// <summary>Right Control OR Mask</summary>
        RightControl = 0x10,

        /// <summary>Right Shift OR Mask</summary>
        RightShift = 0x20,

        /// <summary>Right Alt OR Mask</summary>
        RightAlt = 0x40,

        /// <summary>Right Meta OR Mask</summary>
        RightMeta = 0x80,
    }