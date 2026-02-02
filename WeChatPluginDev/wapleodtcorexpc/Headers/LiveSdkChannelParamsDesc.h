//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveSdkChannelParams, NSString;

@interface LiveSdkChannelParamsDesc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LiveSdkChannelParams *channelParams; // @dynamic channelParams;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *streamId; // @dynamic streamId;
@property(retain, nonatomic) NSString *viewDesc; // @dynamic viewDesc;
@property(nonatomic) unsigned int viewOrder; // @dynamic viewOrder;

@end

