// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
// This file is autogenerated by vtkCreateArrayDispatchImplicitList.cmake.
// Do not edit this file. Your changes will not be saved.
// Funded by CEA, DAM, DIF, F-91297 Arpajon, France

#ifndef vtkArrayDispatchImplicitArrayList_h
#define vtkArrayDispatchImplicitArrayList_h

#include "vtkTypeList.h"
#include "vtkArrayDispatchArrayList.h"

namespace vtkArrayDispatch {
VTK_ABI_NAMESPACE_BEGIN

typedef vtkTypeList::Unique<
  vtkTypeList::Create<
  >
>::Result ReadOnlyArrays;

typedef vtkTypeList::Unique<
vtkTypeList::Append<Arrays,
ReadOnlyArrays>::Result
>::Result AllArrays;

VTK_ABI_NAMESPACE_END

} // end namespace vtkArrayDispatch
#endif // vtkArrayDispatchImplicitArrayList_h

