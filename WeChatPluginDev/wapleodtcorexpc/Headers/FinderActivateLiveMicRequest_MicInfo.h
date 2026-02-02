//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderActivateLiveMicRequest_MicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isAudioEnabled; // @dynamic isAudioEnabled;
@property(nonatomic) _Bool isVideoEnabled; // @dynamic isVideoEnabled;
@property(retain, nonatomic) NSString *sdkUserId; // @dynamic sdkUserId;
@property(nonatomic) unsigned int seatId; // @dynamic seatId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

