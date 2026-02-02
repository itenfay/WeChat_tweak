//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BuiltinIPList, HostList, NetworkControl;

@class WXPBGeneratedMessage;

@interface NetworkSectResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BuiltinIPList *builtinIplist; // @dynamic builtinIplist;
@property(nonatomic) unsigned int certRegion; // @dynamic certRegion;
@property(retain, nonatomic) NetworkControl *networkControl; // @dynamic networkControl;
@property(retain, nonatomic) HostList *newHostList; // @dynamic newHostList;

@end

