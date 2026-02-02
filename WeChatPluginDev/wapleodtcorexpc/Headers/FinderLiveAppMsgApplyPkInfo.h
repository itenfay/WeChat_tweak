//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveRoomImg, NSData, NSString;

@interface FinderLiveAppMsgApplyPkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *applyMicSdkUserId; // @dynamic applyMicSdkUserId;
@property(nonatomic) unsigned int applySdkLiveId; // @dynamic applySdkLiveId;
@property(retain, nonatomic) NSString *liveBgImgUrl; // @dynamic liveBgImgUrl;
@property(retain, nonatomic) NSData *randomMicBuffer; // @dynamic randomMicBuffer;
@property(retain, nonatomic) LiveRoomImg *voiceLiveImg; // @dynamic voiceLiveImg;

@end

