//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface WXCPbWxBannerVoiceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) NSMutableArray *members; // @dynamic members;
@property(nonatomic) unsigned long long millsecond; // @dynamic millsecond;
@property(retain, nonatomic) NSMutableArray *notfrienduserlist; // @dynamic notfrienduserlist;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;
@property(nonatomic) unsigned int routeId; // @dynamic routeId;
@property(retain, nonatomic) NSString *talkcreateuser; // @dynamic talkcreateuser;
@property(nonatomic) int voicestatus; // @dynamic voicestatus;
@property(retain, nonatomic) NSString *wxchatroom; // @dynamic wxchatroom;

@end

