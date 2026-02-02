//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StatusInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int count; // @dynamic count;
@property(nonatomic) int offset; // @dynamic offset;
@property(nonatomic) _Bool skipCheckState; // @dynamic skipCheckState;
@property(nonatomic) long long timeLimitMs; // @dynamic timeLimitMs;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

