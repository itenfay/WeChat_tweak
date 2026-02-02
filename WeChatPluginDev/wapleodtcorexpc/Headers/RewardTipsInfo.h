//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface RewardTipsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long expireTime; // @dynamic expireTime;
@property(retain, nonatomic) NSString *h5Link; // @dynamic h5Link;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSMutableArray *triggerType; // @dynamic triggerType;

@end

