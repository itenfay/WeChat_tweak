//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveSdkAudioParams, LiveSdkChannelParams, LiveSdkVideoParams, NSMutableArray;

@interface LiveSdkParams : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LiveSdkAudioParams *audioParams; // @dynamic audioParams;
@property(retain, nonatomic) LiveSdkChannelParams *channelParams; // @dynamic channelParams;
@property(retain, nonatomic) NSMutableArray *channelParamsDesc; // @dynamic channelParamsDesc;
@property(retain, nonatomic) LiveSdkVideoParams *videoParams; // @dynamic videoParams;

@end

