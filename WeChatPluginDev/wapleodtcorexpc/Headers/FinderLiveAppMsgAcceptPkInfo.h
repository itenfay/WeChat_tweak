//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveRoomImg, NSData, NSString;

@interface FinderLiveAppMsgAcceptPkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *acceptLiveBgImgUrl; // @dynamic acceptLiveBgImgUrl;
@property(retain, nonatomic) NSString *acceptMicSdkUserId; // @dynamic acceptMicSdkUserId;
@property(nonatomic) unsigned int acceptSdkLiveId; // @dynamic acceptSdkLiveId;
@property(retain, nonatomic) LiveRoomImg *acceptVoiceLiveImg; // @dynamic acceptVoiceLiveImg;
@property(retain, nonatomic) NSString *applyLiveBgImgUrl; // @dynamic applyLiveBgImgUrl;
@property(retain, nonatomic) NSString *applyMicSdkUserId; // @dynamic applyMicSdkUserId;
@property(nonatomic) unsigned int applySdkLiveId; // @dynamic applySdkLiveId;
@property(retain, nonatomic) LiveRoomImg *applyVoiceLiveImg; // @dynamic applyVoiceLiveImg;
@property(retain, nonatomic) NSData *newPkSign; // @dynamic newPkSign;
@property(retain, nonatomic) NSData *pkSign; // @dynamic pkSign;
@property(retain, nonatomic) NSData *randomMicBuffer; // @dynamic randomMicBuffer;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

