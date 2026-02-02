//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCheckSpamResponse;

@interface TingCheckSpamRespCacheResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCheckSpamResponse *checkSpamResponse; // @dynamic checkSpamResponse;
@property(nonatomic) unsigned long long expirationTimestamp; // @dynamic expirationTimestamp;

@end

