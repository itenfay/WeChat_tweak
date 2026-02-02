//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveLocation, NSData, NSString;

@interface FinderLiveAppMsgApplyMicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool anonymousApplyMic; // @dynamic anonymousApplyMic;
@property(nonatomic) unsigned int applySeatId; // @dynamic applySeatId;
@property(nonatomic) _Bool autoConnectFlag; // @dynamic autoConnectFlag;
@property(nonatomic) unsigned int confirmExpiredRelativeTime; // @dynamic confirmExpiredRelativeTime;
@property(nonatomic) unsigned long long confirmExpiredTime; // @dynamic confirmExpiredTime;
@property(nonatomic) unsigned int confirmTtl; // @dynamic confirmTtl;
@property(retain, nonatomic) NSString *consultationContent; // @dynamic consultationContent;
@property(retain, nonatomic) NSData *inviteMicBuffer; // @dynamic inviteMicBuffer;
@property(nonatomic) _Bool isPurchaseMic; // @dynamic isPurchaseMic;
@property(retain, nonatomic) FinderLiveLocation *location; // @dynamic location;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(nonatomic) int micType; // @dynamic micType;
@property(nonatomic) unsigned int micUserAttrFlag; // @dynamic micUserAttrFlag;
@property(nonatomic) unsigned int wecoinCount; // @dynamic wecoinCount;

@end

