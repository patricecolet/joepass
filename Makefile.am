bin_PROGRAMS = joepass

 AM_CXXFLAGS= -pg

LANGOBJ = \
languageSupport/languageSupport.cpp


CDEWOBJS = \
cdew/causal_editor.cpp \
cdew/cdewDraw.cpp \
cdew/cdewMem.cpp \
cdew/cdewMenu.cpp \
cdew/cdewtools.cpp \
cdew/cdewWork.cpp

J2OBJS = \
j2/j2.cpp

DIALOGOBJS = \
dialog/dialog.cpp

GLOBJS = \
openGLversion/animationView.cpp \
openGLversion/animationWin.cpp \
openGLversion/dxf.cpp \
openGLversion/editor.cpp \
openGLversion/farbwerte.cpp \
openGLversion/grafik.cpp \
openGLversion/info.cpp \
openGLversion/main.cpp \
openGLversion/opengltools.cpp \
openGLversion/screenshot.cpp \
openGLversion/stringtoscreen.cpp \
openGLversion/texture.cpp \
openGLversion/world.cpp

RUNAROUND = \
runaround/inputWindow.cpp \
runaround/listWindow.cpp \
runaround/runaround.cpp \
runaround/runaroundMenu.cpp

SYSTEMOBJS = \
system/unix/unixMovie.cpp \
system/unix/unixPlaySound.cpp \
system/movie.cpp \
system/myutil.cpp \
system/pathAccess.cpp \
system/sdInit.cpp \
system/fileaccess.cpp 

#system/win/opensave.cpp 
#system/win/winFileaccess.cpp 

TOOLSOBJS = \
tools/applicationFolders.cpp \
tools/cmdLine.cpp \
tools/exitModules.cpp \
tools/fileIO.cpp \
tools/free.cpp \
tools/myPrintf.cpp \
tools/openglmenu.cpp \
tools/prefs.cpp \
tools/vmath.cpp \
tools/windowsSize.cpp

UNIOBJS = \
universal/cameraControl.cpp \
universal/fileHandler.cpp \
universal/jpPrefs.cpp \
universal/jugglers.cpp \
universal/mem.cpp \
universal/notation.cpp \
universal/parseSiteswap.cpp \
universal/pattern.cpp \
universal/prefDef.cpp \
universal/preprocess.cpp \
universal/scanner.cpp \
universal/siteswap.cpp \
universal/styleScanner.cpp\
universal/workspace.cpp

REFACTOREDOBJS = \
refactoring/juggler.cpp \
refactoring/hcurve.cpp \
refactoring/vector3d.cpp \
refactoring/hand.cpp


#if SLINUX
BS_SPECIFIC_OBJS = system/unix/unix.cpp
BS_SPECIFIC_INCLUDES =   -I/usr/include/GL
BS_SPECIFIC_LIBS = -lopengl32 -lfreeglut

#endif

#if SWIN
#BS_SPECIFIC_OBJS =
#BS_SPECIFIC_INCLUDES =  -I/usr/include/GL -I"C:\msys64\mingw64\include\GL"
#BS_SPECIFIC_LIBS =  -lfreeglut -lglu32 -lopengl32 
#endif

#if SMAC_OS_X
#BS_SPECIFIC_OBJS =
#BS_SPECIFIC_INCLUDES = 
#BS_SPECIFIC_LIBS = -framework OpenGL -framework GLUT -framework Foundation #-framework Cg
#endif

#if SMAC
#BS_SPECIFIC_OBJS =
#BS_SPECIFIC_INCLUDES =
#endif


nodist_joepass_SOURCES = $(TOOLSOBJS) $(J2OBJS) $(CDEWOBJS) $(DIALOGOBJS) $(GLOBJS) $(UNIOBJS) $(SYSTEMOBJS) $(RUNAROUND) $(LANGOBJ) $(REFACTOREDOBJS) $(BS_SPECIFIC_OBJS)


AM_CPPFLAGS = -Iheaders -Isystem -Icdew -Idialog -Ij2 -IopenGLversion  -Iuniversal -Isystem -Irunaround  -Itools -IlanguageSupport -Irefactoring $(BS_SPECIFIC_INCLUDES)

#AM_LDFLAGS = $(BS_SPECIFIC_LIBS)
#joepass_LDADD =  -lfreeglut -lglu32 -lopengl32 -lcomdlg32 -lwinmm
joepass_LDADD =  -lglut -lGLU -lGL




























