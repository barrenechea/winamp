// ----------------------------------------------------------------------------
// Generated by InterfaceFactory [Fri May 16 23:15:13 2003]
// 
// File        : rootobjectx.cpp
// Class       : RootObject
// class layer : Dispatchable Receiver
// ----------------------------------------------------------------------------
#include "precomp.h"

#include "rootobjectx.h"
#include "rootobjecti.h"

#define CBCLASS RootObjectX
START_DISPATCH;
  CB(ROOTOBJECT_ROOTOBJECT_GETCLASSNAME, rootobject_getClassName);
  VCB(ROOTOBJECT_ROOTOBJECT_NOTIFY, rootobject_notify);
  CB(ROOTOBJECT_ROOTOBJECT_GETSCRIPTOBJECT, rootobject_getScriptObject);
  VCB(ROOTOBJECT_ROOTOBJECT_SETSCRIPTOBJECT, rootobject_setScriptObject);
  VCB(ROOTOBJECT_ROOTOBJECT_ADDCB, rootobject_addCB);
END_DISPATCH;
#undef CBCLASS

