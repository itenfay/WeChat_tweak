//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RecPluginMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *conversationTips; // @dynamic conversationTips;
@property(nonatomic) unsigned int needCacheResult; // @dynamic needCacheResult;
@property(nonatomic) unsigned int redPointExpireTime; // @dynamic redPointExpireTime;
@property(retain, nonatomic) NSString *redPointMsgId; // @dynamic redPointMsgId;

@end

