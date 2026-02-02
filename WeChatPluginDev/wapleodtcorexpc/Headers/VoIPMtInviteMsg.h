//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface VoIPMtInviteMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *confInviteItem; // @dynamic confInviteItem;
@property(nonatomic) unsigned long long createtime; // @dynamic createtime;
@property(retain, nonatomic) NSMutableArray *displayUserList; // @dynamic displayUserList;
@property(retain, nonatomic) NSString *fromOpenid; // @dynamic fromOpenid;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(retain, nonatomic) NSString *sdkGroupid; // @dynamic sdkGroupid;
@property(retain, nonatomic) NSString *toOpenid; // @dynamic toOpenid;
@property(retain, nonatomic) NSString *wxGroupid; // @dynamic wxGroupid;

@end

