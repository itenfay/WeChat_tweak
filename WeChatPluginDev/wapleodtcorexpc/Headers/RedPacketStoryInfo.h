//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CoverInfoDetail, NSMutableArray, NSString, RedPacketStoryInfo_WxappInfo;

@interface RedPacketStoryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *actionAppNickname; // @dynamic actionAppNickname;
@property(retain, nonatomic) NSString *actionAppUsername; // @dynamic actionAppUsername;
@property(retain, nonatomic) NSString *actionBeforeJumpText; // @dynamic actionBeforeJumpText;
@property(retain, nonatomic) NSString *actionButtonText; // @dynamic actionButtonText;
@property(retain, nonatomic) NSString *actionDarkIconUrl; // @dynamic actionDarkIconUrl;
@property(nonatomic) unsigned int actionEmotionDesignerUin; // @dynamic actionEmotionDesignerUin;
@property(nonatomic) unsigned int actionJumpNewlife; // @dynamic actionJumpNewlife;
@property(retain, nonatomic) NSString *actionJumpText; // @dynamic actionJumpText;
@property(retain, nonatomic) NSString *actionNormalIconUrl; // @dynamic actionNormalIconUrl;
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *actionUrl; // @dynamic actionUrl;
@property(nonatomic) unsigned int autoPlayDelayMs; // @dynamic autoPlayDelayMs;
@property(retain, nonatomic) NSString *corpName; // @dynamic corpName;
@property(retain, nonatomic) CoverInfoDetail *coverInfo; // @dynamic coverInfo;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSMutableArray *detailList; // @dynamic detailList;
@property(nonatomic) unsigned int disableAutoPlay; // @dynamic disableAutoPlay;
@property(retain, nonatomic) NSString *jointLabelText; // @dynamic jointLabelText;
@property(retain, nonatomic) NSString *logoMd5; // @dynamic logoMd5;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(retain, nonatomic) NSString *packetId; // @dynamic packetId;
@property(retain, nonatomic) NSString *sameReceiveLink; // @dynamic sameReceiveLink;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) RedPacketStoryInfo_WxappInfo *wxappInfo; // @dynamic wxappInfo;

@end

