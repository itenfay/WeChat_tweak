//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface ChatRecordEnc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long createTimeMs; // @dynamic createTimeMs;
@property(nonatomic) unsigned long long encId; // @dynamic encId;
@property(retain, nonatomic) NSData *encKey; // @dynamic encKey;

@end

