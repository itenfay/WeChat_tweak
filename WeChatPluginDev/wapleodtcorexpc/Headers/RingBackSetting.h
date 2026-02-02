//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RingBackSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTs; // @dynamic endTs;
@property(retain, nonatomic) NSString *finderNonceId; // @dynamic finderNonceId;
@property(nonatomic) unsigned long long finderObjectId; // @dynamic finderObjectId;
@property(nonatomic) unsigned int startTs; // @dynamic startTs;

@end

