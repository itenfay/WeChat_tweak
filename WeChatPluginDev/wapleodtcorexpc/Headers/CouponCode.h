//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CouponCode : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *code; // @dynamic code;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(nonatomic) unsigned int useTime; // @dynamic useTime;

@end

