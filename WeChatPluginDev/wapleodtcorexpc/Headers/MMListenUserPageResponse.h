//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenMembershipInfo, MMListenMembershipJoinInfo, MMListenMusicBaseResponse, MMListenUserPageResponse_BindFinderUserInfo, NSMutableArray;

@interface MMListenUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenMembershipJoinInfo *adFreeListen; // @dynamic adFreeListen;
@property(nonatomic) int audioPublishCount; // @dynamic audioPublishCount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenUserPageResponse_BindFinderUserInfo *bindFinderUserInfo; // @dynamic bindFinderUserInfo;
@property(retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse; // @dynamic musicBaseResponse;
@property(retain, nonatomic) NSMutableArray *musicTabs; // @dynamic musicTabs;
@property(nonatomic) _Bool openUserpageNotificationList; // @dynamic openUserpageNotificationList;
@property(retain, nonatomic) NSMutableArray *playerSections; // @dynamic playerSections;
@property(retain, nonatomic) MMListenMembershipInfo *qqmusicMembership; // @dynamic qqmusicMembership;
@property(retain, nonatomic) MMListenMembershipJoinInfo *qqmusicMembershipJoin; // @dynamic qqmusicMembershipJoin;
@property(retain, nonatomic) NSMutableArray *sections; // @dynamic sections;
@property(nonatomic) _Bool showAudioPublish; // @dynamic showAudioPublish;
@property(nonatomic) unsigned long long timeListen; // @dynamic timeListen;

@end

