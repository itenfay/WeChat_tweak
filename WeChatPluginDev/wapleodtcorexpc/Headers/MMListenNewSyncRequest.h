//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MMListenAudioBaseRequest, MMListenBlueToothStatus, MMListenMusicBaseRequest;

@class WXPBGeneratedMessage;

@interface MMListenNewSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest; // @dynamic audioBaseRequest;
@property(retain, nonatomic) MMListenBlueToothStatus *blueToothStatus; // @dynamic blueToothStatus;
@property(retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest; // @dynamic musicBaseRequest;

@end

