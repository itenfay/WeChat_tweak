//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, WxaSyncBaseCmd;

@interface WxaSyncIssueLaunchCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaSyncBaseCmd *base; // @dynamic base;
@property(retain, nonatomic) NSString *launch; // @dynamic launch;
@property(retain, nonatomic) NSMutableArray *sceneList; // @dynamic sceneList;
@property(nonatomic) unsigned int useBeginTime; // @dynamic useBeginTime;
@property(nonatomic) unsigned int useEndTime; // @dynamic useEndTime;

@end

