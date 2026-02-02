//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenUserInfo, NSString;

@interface MMListenBarrageItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *barrageId; // @dynamic barrageId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(nonatomic) int time; // @dynamic time;
@property(retain, nonatomic) MMListenUserInfo *user; // @dynamic user;

@end

