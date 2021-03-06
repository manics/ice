//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

internal class PluginI : Ice.Plugin
{
    internal PluginI(Ice.Communicator communicator)
    {
        _communicator = communicator;
    }

    public void initialize()
    {
        IceInternal.ProtocolPluginFacade facade = IceInternal.Util.getProtocolPluginFacade(_communicator);
        for(short s = 0; s < 100; ++s)
        {
            IceInternal.EndpointFactory factory = facade.getEndpointFactory(s);
            if(factory != null)
            {
                facade.addEndpointFactory(new EndpointFactory(factory));
            }
        }
    }

    public void destroy()
    {
    }

    private Ice.Communicator _communicator;
}
