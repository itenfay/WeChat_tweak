//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RingBackSettingOplog : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTs; // @dynamic endTs;
@property(retain, nonatomic) NSString *finderNonceId; // @dynamic finderNonceId;
@property(nonatomic) unsigned long long finderObjectId; // @dynamic finderObjectId;
@property(nonatomic) unsigned int setting; // @dynamic setting;
@property(nonatomic) unsigned int startTs; // @dynamic startTs;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

