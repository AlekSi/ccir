// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

typedef unsigned long XID;
typedef unsigned long Mask;
typedef unsigned long Atom;
typedef unsigned long VisualID;
typedef unsigned long Time;
typedef XID Window;
typedef XID Drawable;
typedef XID Font;
typedef XID Pixmap;
typedef XID Cursor;
typedef XID Colormap;
typedef XID GContext;
typedef XID KeySym;
typedef unsigned char KeyCode;
#define Above (0)
#define AllTemporary (0l)
#define AllocAll (1)
#define AllocNone (0)
#define AllowExposures (1)
#define AlreadyGrabbed (1)
#define Always (2)
#define AnyButton (0l)
#define AnyKey (0l)
#define AnyModifier (32768)
#define AnyPropertyType (0l)
#define ArcChord (0)
#define ArcPieSlice (1)
#define AsyncBoth (6)
#define AsyncKeyboard (3)
#define AsyncPointer (0)
#define AutoRepeatModeDefault (2)
#define AutoRepeatModeOff (0)
#define AutoRepeatModeOn (1)
#define BadAccess (10)
#define BadAlloc (11)
#define BadAtom (5)
#define BadColor (12)
#define BadCursor (6)
#define BadDrawable (9)
#define BadFont (7)
#define BadGC (13)
#define BadIDChoice (14)
#define BadImplementation (17)
#define BadLength (16)
#define BadMatch (8)
#define BadName (15)
#define BadPixmap (4)
#define BadRequest (1)
#define BadValue (2)
#define BadWindow (3)
#define Below (1)
#define BottomIf (3)
#define Button1 (1)
#define Button1Mask (256)
#define Button1MotionMask (256l)
#define Button2 (2)
#define Button2Mask (512)
#define Button2MotionMask (512l)
#define Button3 (3)
#define Button3Mask (1024)
#define Button3MotionMask (1024l)
#define Button4 (4)
#define Button4Mask (2048)
#define Button4MotionMask (2048l)
#define Button5 (5)
#define Button5Mask (4096)
#define Button5MotionMask (4096l)
#define ButtonMotionMask (8192l)
#define ButtonPress (4)
#define ButtonPressMask (4l)
#define ButtonRelease (5)
#define ButtonReleaseMask (8l)
#define CWBackPixel (2l)
#define CWBackPixmap (1l)
#define CWBackingPixel (256l)
#define CWBackingPlanes (128l)
#define CWBackingStore (64l)
#define CWBitGravity (16l)
#define CWBorderPixel (8l)
#define CWBorderPixmap (4l)
#define CWBorderWidth (16)
#define CWColormap (8192l)
#define CWCursor (16384l)
#define CWDontPropagate (4096l)
#define CWEventMask (2048l)
#define CWHeight (8)
#define CWOverrideRedirect (512l)
#define CWSaveUnder (1024l)
#define CWSibling (32)
#define CWStackMode (64)
#define CWWidth (4)
#define CWWinGravity (32l)
#define CWX (1)
#define CWY (2)
#define CapButt (1)
#define CapNotLast (0)
#define CapProjecting (3)
#define CapRound (2)
#define CenterGravity (5)
#define CirculateNotify (26)
#define CirculateRequest (27)
#define ClientMessage (33)
#define ClipByChildren (0)
#define ColormapChangeMask (8388608l)
#define ColormapInstalled (1)
#define ColormapNotify (32)
#define ColormapUninstalled (0)
#define Complex (0)
#define ConfigureNotify (22)
#define ConfigureRequest (23)
#define ControlMapIndex (2)
#define ControlMask (4)
#define Convex (2)
#define CoordModeOrigin (0)
#define CoordModePrevious (1)
#define CopyFromParent (0l)
#define CreateNotify (16)
#define CurrentTime (0l)
#define CursorShape (0)
#define DefaultBlanking (2)
#define DefaultExposures (2)
#define DestroyAll (0)
#define DestroyNotify (17)
#define DirectColor (5)
#define DisableAccess (0)
#define DisableScreenInterval (0)
#define DisableScreenSaver (0)
#define DoBlue (4)
#define DoGreen (2)
#define DoRed (1)
#define DontAllowExposures (0)
#define DontPreferBlanking (0)
#define EastGravity (6)
#define EnableAccess (1)
#define EnterNotify (7)
#define EnterWindowMask (16l)
#define EvenOddRule (0)
#define Expose (12)
#define ExposureMask (32768l)
#define FamilyChaos (2)
#define FamilyDECnet (1)
#define FamilyInternet (0)
#define FamilyInternet6 (6)
#define FamilyServerInterpreted (5)
#define FillOpaqueStippled (3)
#define FillSolid (0)
#define FillStippled (2)
#define FillTiled (1)
#define FirstExtensionError (128)
#define FocusChangeMask (2097152l)
#define FocusIn (9)
#define FocusOut (10)
#define FontChange (255)
#define FontLeftToRight (0)
#define FontRightToLeft (1)
#define ForgetGravity (0)
#define GCArcMode (4194304l)
#define GCBackground (8l)
#define GCCapStyle (64l)
#define GCClipMask (524288l)
#define GCClipXOrigin (131072l)
#define GCClipYOrigin (262144l)
#define GCDashList (2097152l)
#define GCDashOffset (1048576l)
#define GCFillRule (512l)
#define GCFillStyle (256l)
#define GCFont (16384l)
#define GCForeground (4l)
#define GCFunction (1l)
#define GCGraphicsExposures (65536l)
#define GCJoinStyle (128l)
#define GCLastBit (22)
#define GCLineStyle (32l)
#define GCLineWidth (16l)
#define GCPlaneMask (2l)
#define GCStipple (2048l)
#define GCSubwindowMode (32768l)
#define GCTile (1024l)
#define GCTileStipXOrigin (4096l)
#define GCTileStipYOrigin (8192l)
#define GXand (1)
#define GXandInverted (4)
#define GXandReverse (2)
#define GXclear (0)
#define GXcopy (3)
#define GXcopyInverted (12)
#define GXequiv (9)
#define GXinvert (10)
#define GXnand (14)
#define GXnoop (5)
#define GXnor (8)
#define GXor (7)
#define GXorInverted (13)
#define GXorReverse (11)
#define GXset (15)
#define GXxor (6)
#define GenericEvent (35)
#define GrabFrozen (4)
#define GrabInvalidTime (2)
#define GrabModeAsync (1)
#define GrabModeSync (0)
#define GrabNotViewable (3)
#define GrabSuccess (0)
#define GraphicsExpose (13)
#define GravityNotify (24)
#define GrayScale (1)
#define HostDelete (1)
#define HostInsert (0)
#define IncludeInferiors (1)
#define InputFocus (1l)
#define InputOnly (2)
#define InputOutput (1)
#define IsUnmapped (0)
#define IsUnviewable (1)
#define IsViewable (2)
#define JoinBevel (2)
#define JoinMiter (0)
#define JoinRound (1)
#define KBAutoRepeatMode (128l)
#define KBBellDuration (8l)
#define KBBellPercent (2l)
#define KBBellPitch (4l)
#define KBKey (64l)
#define KBKeyClickPercent (1l)
#define KBLed (16l)
#define KBLedMode (32l)
#define KeyPress (2)
#define KeyPressMask (1l)
#define KeyRelease (3)
#define KeyReleaseMask (2l)
#define KeymapNotify (11)
#define KeymapStateMask (16384l)
#define LASTEvent (36)
#define LSBFirst (0)
#define LastExtensionError (255)
#define LeaveNotify (8)
#define LeaveWindowMask (32l)
#define LedModeOff (0)
#define LedModeOn (1)
#define LineDoubleDash (2)
#define LineOnOffDash (1)
#define LineSolid (0)
#define LockMapIndex (1)
#define LockMask (2)
#define LowerHighest (1)
#define MSBFirst (1)
#define MapNotify (19)
#define MapRequest (20)
#define MappingBusy (1)
#define MappingFailed (2)
#define MappingKeyboard (1)
#define MappingModifier (0)
#define MappingNotify (34)
#define MappingPointer (2)
#define MappingSuccess (0)
#define Mod1MapIndex (3)
#define Mod1Mask (8)
#define Mod2MapIndex (4)
#define Mod2Mask (16)
#define Mod3MapIndex (5)
#define Mod3Mask (32)
#define Mod4MapIndex (6)
#define Mod4Mask (64)
#define Mod5MapIndex (7)
#define Mod5Mask (128)
#define MotionNotify (6)
#define NoEventMask (0l)
#define NoExpose (14)
#define NoSymbol (0l)
#define Nonconvex (1)
#define None (0l)
#define NorthEastGravity (3)
#define NorthGravity (2)
#define NorthWestGravity (1)
#define NotUseful (0)
#define NotifyAncestor (0)
#define NotifyDetailNone (7)
#define NotifyGrab (1)
#define NotifyHint (1)
#define NotifyInferior (2)
#define NotifyNonlinear (3)
#define NotifyNonlinearVirtual (4)
#define NotifyNormal (0)
#define NotifyPointer (5)
#define NotifyPointerRoot (6)
#define NotifyUngrab (2)
#define NotifyVirtual (1)
#define NotifyWhileGrabbed (3)
#define Opposite (4)
#define OwnerGrabButtonMask (16777216l)
#define ParentRelative (1l)
#define PlaceOnBottom (1)
#define PlaceOnTop (0)
#define PointerMotionHintMask (128l)
#define PointerMotionMask (64l)
#define PointerRoot (1l)
#define PointerWindow (0l)
#define PreferBlanking (1)
#define PropModeAppend (2)
#define PropModePrepend (1)
#define PropModeReplace (0)
#define PropertyChangeMask (4194304l)
#define PropertyDelete (1)
#define PropertyNewValue (0)
#define PropertyNotify (28)
#define PseudoColor (3)
#define RaiseLowest (0)
#define ReparentNotify (21)
#define ReplayKeyboard (5)
#define ReplayPointer (2)
#define ResizeRedirectMask (262144l)
#define ResizeRequest (25)
#define RetainPermanent (1)
#define RetainTemporary (2)
#define RevertToNone ( int ) None
#define RevertToParent (2)
#define RevertToPointerRoot ( int ) PointerRoot
#define ScreenSaverActive (1)
#define ScreenSaverReset (0)
#define SelectionClear (29)
#define SelectionNotify (31)
#define SelectionRequest (30)
#define SetModeDelete (1)
#define SetModeInsert (0)
#define ShiftMapIndex (0)
#define ShiftMask (1)
#define SouthEastGravity (9)
#define SouthGravity (8)
#define SouthWestGravity (7)
#define StaticColor (2)
#define StaticGravity (10)
#define StaticGray (0)
#define StippleShape (2)
#define StructureNotifyMask (131072l)
#define SubstructureNotifyMask (524288l)
#define SubstructureRedirectMask (1048576l)
#define Success (0)
#define SyncBoth (7)
#define SyncKeyboard (4)
#define SyncPointer (1)
#define TileShape (1)
#define TopIf (2)
#define TrueColor (4)
#define UnmapGravity (0)
#define UnmapNotify (18)
#define Unsorted (0)
#define VisibilityChangeMask (65536l)
#define VisibilityFullyObscured (2)
#define VisibilityNotify (15)
#define VisibilityPartiallyObscured (1)
#define VisibilityUnobscured (0)
#define WestGravity (4)
#define WhenMapped (1)
#define WindingRule (1)
#define XYBitmap (0)
#define XYPixmap (1)
#define X_H
#define X_PROTOCOL (11)
#define X_PROTOCOL_REVISION (0)
#define YSorted (1)
#define YXBanded (3)
#define YXSorted (2)
#define ZPixmap (2)
#define _XTYPEDEF_ATOM
#define _XTYPEDEF_FONT
#define _XTYPEDEF_MASK
#define _XTYPEDEF_XID
