//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface AdLogItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(nonatomic) int logId; // @dynamic logId;
@property(retain, nonatomic) NSData *logStr; // @dynamic logStr;

@end

