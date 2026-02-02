//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, LiveSdkInfo, NSString;

@interface FinderLiveAppMsgAcceptMicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int acceptSeatId; // @dynamic acceptSeatId;
@property(nonatomic) unsigned long long expiredTime; // @dynamic expiredTime;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @dynamic liveSdkInfo;
@property(retain, nonatomic) FinderLiveContact *micContact; // @dynamic micContact;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(nonatomic) int micType; // @dynamic micType;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

