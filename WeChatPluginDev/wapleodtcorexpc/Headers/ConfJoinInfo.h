//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ConfJoinInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *businessInfo; // @dynamic businessInfo;
@property(nonatomic) unsigned int fixedVideoLength; // @dynamic fixedVideoLength;
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(nonatomic) unsigned long long imroomid; // @dynamic imroomid;
@property(nonatomic) unsigned int maxDecodeFps; // @dynamic maxDecodeFps;
@property(nonatomic) _Bool muteAudio; // @dynamic muteAudio;
@property(nonatomic) _Bool muteVideo; // @dynamic muteVideo;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *ownerGroupid; // @dynamic ownerGroupid;
@property(nonatomic) unsigned int roomType; // @dynamic roomType;
@property(retain, nonatomic) NSString *subAppid; // @dynamic subAppid;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) unsigned int videoConfig; // @dynamic videoConfig;
@property(nonatomic) unsigned int videoRatio; // @dynamic videoRatio;

@end

