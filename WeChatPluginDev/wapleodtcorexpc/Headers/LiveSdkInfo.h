//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface LiveSdkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long expireForPmk; // @dynamic expireForPmk;
@property(nonatomic) unsigned long long expireForSig; // @dynamic expireForSig;
@property(retain, nonatomic) NSString *liveCdnUrl; // @dynamic liveCdnUrl;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int sdkAppid; // @dynamic sdkAppid;
@property(retain, nonatomic) NSString *sdkCreateUserId; // @dynamic sdkCreateUserId;
@property(nonatomic) unsigned int sdkLiveId; // @dynamic sdkLiveId;
@property(retain, nonatomic) NSData *sdkParams; // @dynamic sdkParams;
@property(retain, nonatomic) NSData *sdkPrivateMapKey; // @dynamic sdkPrivateMapKey;
@property(nonatomic) unsigned int sdkRoleId; // @dynamic sdkRoleId;
@property(retain, nonatomic) NSString *sdkUserId; // @dynamic sdkUserId;
@property(retain, nonatomic) NSData *sdkUserSig; // @dynamic sdkUserSig;

@end

