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

// /usr/include/X11/X.h 

#define FirstExtensionError (128)
#define FamilyServerInterpreted (5)
#define GravityNotify (24)
#define GCTileStipYOrigin (8192l)
#define Button1MotionMask (256l)
#define YXBanded (3)
#define UnmapNotify (18)
#define MappingNotify (34)
#define ConfigureNotify (22)
#define Nonconvex (1)
#define PropertyNotify (28)
#define GXset (15)
#define DontAllowExposures (0)
#define RaiseLowest (0)
#define ColormapNotify (32)
#define CWStackMode (64)
#define MapNotify (19)
#define GXxor (6)
#define GXorInverted (13)
#define LastExtensionError (255)
#define GXinvert (10)
#define AutoRepeatModeOn (1)
#define GXclear (0)
#define GrabModeAsync (1)
#define LeaveNotify (8)
#define DoRed (1)
#define CapRound (2)
#define GXnand (14)
#define ArcPieSlice (1)
#define SetModeDelete (1)
#define GXandInverted (4)
#define YXSorted (2)
#define Button2Mask (512)
#define VisibilityPartiallyObscured (1)
#define BadFont (7)
#define BadColor (12)
#define JoinRound (1)
#define GrabInvalidTime (2)
#define _XTYPEDEF_ATOM
#define CWBitGravity (16l)
#define KBLedMode (32l)
#define CoordModeOrigin (0)
#define NotifyPointerRoot (6)
#define LockMapIndex (1)
#define CWSibling (32)
#define NotifyGrab (1)
#define LineSolid (0)
#define DisableScreenSaver (0)
#define FontRightToLeft (1)
#define ButtonMotionMask (8192l)
#define BadIDChoice (14)
#define BadDrawable (9)
#define SubstructureRedirectMask (1048576l)
#define BottomIf (3)
#define LedModeOn (1)
#define GCCapStyle (64l)
#define IsUnmapped (0)
#define DefaultBlanking (2)
#define AnyKey (0l)
#define LASTEvent (36)
#define ResizeRedirectMask (262144l)
#define SyncBoth (7)
#define ScreenSaverReset (0)
#define Button1Mask (256)
#define ColormapInstalled (1)
#define GCForeground (4l)
#define RevertToPointerRoot ( int ) PointerRoot
#define NotifyAncestor (0)
#define BadMatch (8)
#define ZPixmap (2)
#define MapRequest (20)
#define DoBlue (4)
#define ControlMapIndex (2)
#define Mod3Mask (32)
#define Above (0)
#define GCDashOffset (1048576l)
#define ResizeRequest (25)
#define CWBackPixmap (1l)
#define SouthWestGravity (7)
#define GXcopy (3)
#define StaticGravity (10)
#define GCSubwindowMode (32768l)
#define GCClipMask (524288l)
#define _XTYPEDEF_FONT
#define GenericEvent (35)
#define PropModeReplace (0)
#define LowerHighest (1)
#define IsUnviewable (1)
#define HostDelete (1)
#define InputFocus (1l)
#define Success (0)
#define DisableAccess (0)
#define CWEventMask (2048l)
#define AutoRepeatModeDefault (2)
#define BadAlloc (11)
#define PlaceOnTop (0)
#define GrabModeSync (0)
#define NotifyInferior (2)
#define UnmapGravity (0)
#define GCTile (1024l)
#define Mod1MapIndex (3)
#define NotifyPointer (5)
#define LedModeOff (0)
#define NotifyNonlinearVirtual (4)
#define PropertyNewValue (0)
#define DestroyNotify (17)
#define KeyReleaseMask (2l)
#define GCBackground (8l)
#define CapNotLast (0)
#define YSorted (1)
#define Convex (2)
#define CenterGravity (5)
#define GCTileStipXOrigin (4096l)
#define Button2MotionMask (512l)
#define GrabSuccess (0)
#define GCFillStyle (256l)
#define CreateNotify (16)
#define KeyPress (2)
#define FontLeftToRight (0)
#define AsyncPointer (0)
#define KBKey (64l)
#define FocusIn (9)
#define ParentRelative (1l)
#define ButtonReleaseMask (8l)
#define KBBellPitch (4l)
#define ScreenSaverActive (1)
#define Unsorted (0)
#define GCDashList (2097152l)
#define GCJoinStyle (128l)
#define BadImplementation (17)
#define MotionNotify (6)
#define NorthEastGravity (3)
#define WhenMapped (1)
#define XYPixmap (1)
#define WestGravity (4)
#define CWSaveUnder (1024l)
#define CWDontPropagate (4096l)
#define Button5Mask (4096)
#define PropModeAppend (2)
#define CWHeight (8)
#define GXnoop (5)
#define GXequiv (9)
#define CWBorderPixel (8l)
#define CursorShape (0)
#define CopyFromParent (0l)
#define AutoRepeatModeOff (0)
#define NoEventMask (0l)
#define GCFillRule (512l)
#define _XTYPEDEF_MASK
#define None (0l)
#define FamilyInternet6 (6)
#define GXand (1)
#define DirectColor (5)
#define KBBellPercent (2l)
#define OwnerGrabButtonMask (16777216l)
#define ColormapUninstalled (0)
#define GCClipYOrigin (262144l)
#define NorthWestGravity (1)
#define DestroyAll (0)
#define NotifyWhileGrabbed (3)
#define Mod2Mask (16)
#define KeymapStateMask (16384l)
#define CapButt (1)
#define Mod4Mask (64)
#define SyncPointer (1)
#define MappingFailed (2)
#define CWColormap (8192l)
#define KeymapNotify (11)
#define NotifyDetailNone (7)
#define ButtonRelease (5)
#define GCStipple (2048l)
#define CoordModePrevious (1)
#define FontChange (255)
#define WindingRule (1)
#define FillOpaqueStippled (3)
#define KeyRelease (3)
#define PlaceOnBottom (1)
#define CirculateNotify (26)
#define Expose (12)
#define AnyButton (0l)
#define RevertToParent (2)
#define CWOverrideRedirect (512l)
#define NotifyHint (1)
#define GCFunction (1l)
#define BadPixmap (4)
#define EnterNotify (7)
#define ArcChord (0)
#define CWWinGravity (32l)
#define PointerMotionMask (64l)
#define SouthEastGravity (9)
#define GXor (7)
#define Button5 (5)
#define GrayScale (1)
#define HostInsert (0)
#define BadWindow (3)
#define GraphicsExpose (13)
#define MappingBusy (1)
#define GCPlaneMask (2l)
#define GCLastBit (22)
#define SetModeInsert (0)
#define GXandReverse (2)
#define PointerRoot (1l)
#define PointerWindow (0l)
#define ConfigureRequest (23)
#define AnyModifier (32768)
#define Button4 (4)
#define XYBitmap (0)
#define SelectionClear (29)
#define TopIf (2)
#define RevertToNone ( int ) None
#define CWBackingPixel (256l)
#define ButtonPress (4)
#define ExposureMask (32768l)
#define Complex (0)
#define Mod2MapIndex (4)
#define Mod1Mask (8)
#define ControlMask (4)
#define CWWidth (4)
#define BadLength (16)
#define CWY (2)
#define FamilyInternet (0)
#define AlreadyGrabbed (1)
#define Mod4MapIndex (6)
#define CurrentTime (0l)
#define PseudoColor (3)
#define Button3 (3)
#define EastGravity (6)
#define CWBorderPixmap (4l)
#define GCArcMode (4194304l)
#define Mod5MapIndex (7)
#define GrabFrozen (4)
#define SyncKeyboard (4)
#define DontPreferBlanking (0)
#define VisibilityUnobscured (0)
#define PreferBlanking (1)
#define GXnor (8)
#define AnyPropertyType (0l)
#define EnterWindowMask (16l)
#define NotifyUngrab (2)
#define BadName (15)
#define StructureNotifyMask (131072l)
#define KBLed (16l)
#define Button1 (1)
#define CWBackPixel (2l)
#define GrabNotViewable (3)
#define Below (1)
#define MappingModifier (0)
#define CWBackingStore (64l)
#define GCGraphicsExposures (65536l)
#define ForgetGravity (0)
#define ShiftMapIndex (0)
#define FocusOut (10)
#define NoSymbol (0l)
#define IncludeInferiors (1)
#define Button4Mask (2048)
#define ClientMessage (33)
#define EvenOddRule (0)
#define VisibilityFullyObscured (2)
#define _XTYPEDEF_XID
#define FillStippled (2)
#define GCFont (16384l)
#define ClipByChildren (0)
#define CWCursor (16384l)
#define TileShape (1)
#define Mod5Mask (128)
#define TrueColor (4)
#define GCLineStyle (32l)
#define StaticColor (2)
#define MappingKeyboard (1)
#define LineOnOffDash (1)
#define BadValue (2)
#define KBBellDuration (8l)
#define PropModePrepend (1)
#define ReplayPointer (2)
#define ReparentNotify (21)
#define Button2 (2)
#define StippleShape (2)
#define BadRequest (1)
#define NotifyVirtual (1)
#define CWBackingPlanes (128l)
#define FamilyDECnet (1)
#define JoinMiter (0)
#define X_H
#define LockMask (2)
#define RetainPermanent (1)
#define SouthGravity (8)
#define NotifyNonlinear (3)
#define CapProjecting (3)
#define PropertyChangeMask (4194304l)
#define NotUseful (0)
#define DefaultExposures (2)
#define DisableScreenInterval (0)
#define NoExpose (14)
#define VisibilityNotify (15)
#define X_PROTOCOL (11)
#define DoGreen (2)
#define InputOutput (1)
#define CWX (1)
#define BadCursor (6)
#define CWBorderWidth (16)
#define MSBFirst (1)
#define SubstructureNotifyMask (524288l)
#define IsViewable (2)
#define GXorReverse (11)
#define FamilyChaos (2)
#define NotifyNormal (0)
#define BadGC (13)
#define FocusChangeMask (2097152l)
#define VisibilityChangeMask (65536l)
#define KBKeyClickPercent (1l)
#define CirculateRequest (27)
#define FillSolid (0)
#define AllTemporary (0l)
#define Opposite (4)
#define Mod3MapIndex (5)
#define RetainTemporary (2)
#define GXcopyInverted (12)
#define BadAccess (10)
#define LineDoubleDash (2)
#define InputOnly (2)
#define AsyncKeyboard (3)
#define Button5MotionMask (4096l)
#define X_PROTOCOL_REVISION (0)
#define PropertyDelete (1)
#define FillTiled (1)
#define StaticGray (0)
#define Button4MotionMask (2048l)
#define KBAutoRepeatMode (128l)
#define MappingPointer (2)
#define MappingSuccess (0)
#define LSBFirst (0)
#define KeyPressMask (1l)
#define ColormapChangeMask (8388608l)
#define Always (2)
#define Button3MotionMask (1024l)
#define ReplayKeyboard (5)
#define PointerMotionHintMask (128l)
#define SelectionNotify (31)
#define GCLineWidth (16l)
#define Button3Mask (1024)
#define ButtonPressMask (4l)
#define SelectionRequest (30)
#define AllocAll (1)
#define JoinBevel (2)
#define ShiftMask (1)
#define EnableAccess (1)
#define GCClipXOrigin (131072l)
#define AsyncBoth (6)
#define AllocNone (0)
#define BadAtom (5)
#define NorthGravity (2)
#define LeaveWindowMask (32l)
#define AllowExposures (1)
