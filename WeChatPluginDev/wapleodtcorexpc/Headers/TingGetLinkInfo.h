//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenAudioGetTTSInfoResponse, MMListenPlayResponse, NSData;

@interface TingGetLinkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioGetTTSInfoResponse *audioGetTtsinfoResponse; // @dynamic audioGetTtsinfoResponse;
@property(retain, nonatomic) NSData *finderInfo; // @dynamic finderInfo;
@property(nonatomic) int listenItemType; // @dynamic listenItemType;
@property(retain, nonatomic) MMListenPlayResponse *listenPlayInfo; // @dynamic listenPlayInfo;

@end

