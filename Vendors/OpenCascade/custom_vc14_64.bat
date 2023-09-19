echo off

rem CASDEB comes as third argument

if /I "%VCVER%" == "vc14" (
  if "%ARCH%" == "64" (
    rem set environment variables used by OCCT
    set CSF_FPE=0

    set "TCL_DIR="
    set "TK_DIR="
    set "FREETYPE_DIR="
    set "FREEIMAGE_DIR=C:/OpenCASCADE-7.7.0-vc14-64/freeimage-3.17.0-vc14-64/bin"
    set "EGL_DIR="
    set "GLES2_DIR="
    set "TBB_DIR="
    set "VTK_DIR=C:/OpenCASCADE-7.7.0-vc14-64/vtk-6.1.0-vc14-64/bin"
    set "FFMPEG_DIR=C:/OpenCASCADE-7.7.0-vc14-64/ffmpeg-3.3.4-64/bin"
    set "OPENVR_DIR="

    if not "" == "" (
      set "QTDIR="
    )
    set "TCL_VERSION_WITH_DOT=8.6"
    set "TK_VERSION_WITH_DOT=8.6"

    set "CSF_OCCTBinPath=%CASROOT%/win64/vc14/bin%3"
    set "CSF_OCCTLibPath=%CASROOT%/win64/vc14/lib%3"

    set "CSF_OCCTIncludePath=%CASROOT%/inc"
    set "CSF_OCCTResourcePath=%CASROOT%/src"
    set "CSF_OCCTDataPath=%CASROOT%/data"
    set "CSF_OCCTSamplesPath=%CASROOT%/samples"
    set "CSF_OCCTTestsPath=%CASROOT%/tests"
    set "CSF_OCCTDocPath=%CASROOT%/doc"
  )
)

