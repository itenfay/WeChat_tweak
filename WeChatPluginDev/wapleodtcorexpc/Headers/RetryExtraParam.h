//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RetryExtraParam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *idempotentId; // @dynamic idempotentId;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(nonatomic) int retryBusiId; // @dynamic retryBusiId;

@end

