//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenMembershipInfo_BindQQMusicInfo, NSString;

@interface MMListenMembershipInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenMembershipInfo_BindQQMusicInfo *bindQqmusicInfo; // @dynamic bindQqmusicInfo;
@property(nonatomic) unsigned long long expireTime; // @dynamic expireTime;
@property(nonatomic) _Bool isCancelSubscribe; // @dynamic isCancelSubscribe;
@property(nonatomic) _Bool isSubscribe; // @dynamic isSubscribe;
@property(nonatomic) unsigned long long joinTime; // @dynamic joinTime;
@property(nonatomic) int membershipType; // @dynamic membershipType;
@property(nonatomic) unsigned long long renewTime; // @dynamic renewTime;
@property(retain, nonatomic) NSString *resourceId; // @dynamic resourceId;

@end

