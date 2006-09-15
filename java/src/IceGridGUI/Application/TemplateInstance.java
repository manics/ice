// **********************************************************************
//
// Copyright (c) 2003-2006 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
package IceGridGUI.Application;

interface TemplateInstance
{
    Object rebuild(java.util.List editables) throws UpdateFailedException;
    void restore(Object backupObj);
}

