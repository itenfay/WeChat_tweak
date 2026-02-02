//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaSyncCmds;

@interface SyncVersionSingleRespInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appServiceType; // @dynamic appServiceType;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) WxaSyncCmds *cmds; // @dynamic cmds;
@property(retain, nonatomic) NSString *wxaUserName; // @dynamic wxaUserName;

@end

