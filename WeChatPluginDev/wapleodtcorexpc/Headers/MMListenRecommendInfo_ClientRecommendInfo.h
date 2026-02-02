//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenRecommendInfo_ClientRecommendInfo_FriendCommendListExtInfo, MMListenRecommendInfo_ClientRecommendInfo_VoiceRecommendInfo, NSMutableArray;

@interface MMListenRecommendInfo_ClientRecommendInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenRecommendInfo_ClientRecommendInfo_FriendCommendListExtInfo *friendCommendListExtInfo; // @dynamic friendCommendListExtInfo;
@property(retain, nonatomic) NSMutableArray *friendComments; // @dynamic friendComments;
@property(nonatomic) _Bool showVipLimitIcon; // @dynamic showVipLimitIcon;
@property(retain, nonatomic) MMListenRecommendInfo_ClientRecommendInfo_VoiceRecommendInfo *voiceRecommendInfo; // @dynamic voiceRecommendInfo;

@end

