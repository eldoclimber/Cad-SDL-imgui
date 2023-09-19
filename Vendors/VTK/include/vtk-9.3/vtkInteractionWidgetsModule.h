
#ifndef VTKINTERACTIONWIDGETS_EXPORT_H
#define VTKINTERACTIONWIDGETS_EXPORT_H

#ifdef VTKINTERACTIONWIDGETS_STATIC_DEFINE
#  define VTKINTERACTIONWIDGETS_EXPORT
#  define VTKINTERACTIONWIDGETS_NO_EXPORT
#else
#  ifndef VTKINTERACTIONWIDGETS_EXPORT
#    ifdef InteractionWidgets_EXPORTS
        /* We are building this library */
#      define VTKINTERACTIONWIDGETS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKINTERACTIONWIDGETS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKINTERACTIONWIDGETS_NO_EXPORT
#    define VTKINTERACTIONWIDGETS_NO_EXPORT 
#  endif
#endif

#ifndef VTKINTERACTIONWIDGETS_DEPRECATED
#  define VTKINTERACTIONWIDGETS_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKINTERACTIONWIDGETS_DEPRECATED_EXPORT
#  define VTKINTERACTIONWIDGETS_DEPRECATED_EXPORT VTKINTERACTIONWIDGETS_EXPORT VTKINTERACTIONWIDGETS_DEPRECATED
#endif

#ifndef VTKINTERACTIONWIDGETS_DEPRECATED_NO_EXPORT
#  define VTKINTERACTIONWIDGETS_DEPRECATED_NO_EXPORT VTKINTERACTIONWIDGETS_NO_EXPORT VTKINTERACTIONWIDGETS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKINTERACTIONWIDGETS_NO_DEPRECATED
#    define VTKINTERACTIONWIDGETS_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkInteractionWidgetsModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKINTERACTIONWIDGETS_EXPORT_H */
