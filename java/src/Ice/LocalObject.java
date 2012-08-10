// **********************************************************************
//
// Copyright (c) 2003-2012 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

package Ice;

 /**
  * @deprecated This interface is deprecated; you should use a plain java.lang.Object
  **/
public interface LocalObject
{
    boolean equals(java.lang.Object rhs);

    java.lang.Object clone() throws java.lang.CloneNotSupportedException;
}
