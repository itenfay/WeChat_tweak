//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChatRoomLiveExtInfo, NSMutableArray, NSString;

@interface LiveInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorIdentityId; // @dynamic anchorIdentityId;
@property(retain, nonatomic) ChatRoomLiveExtInfo *chatroomliveExtInfo; // @dynamic chatroomliveExtInfo;
@property(retain, nonatomic) NSString *createSdkUserId; // @dynamic createSdkUserId;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *defaultLiveName; // @dynamic defaultLiveName;
@property(nonatomic) _Bool enableApplyLiveMic; // @dynamic enableApplyLiveMic;
@property(nonatomic) _Bool enableComment; // @dynamic enableComment;
@property(nonatomic) _Bool enableLiveReplay; // @dynamic enableLiveReplay;
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(nonatomic) unsigned int likeCnt; // @dynamic likeCnt;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) int liveMicType; // @dynamic liveMicType;
@property(retain, nonatomic) NSString *liveName; // @dynamic liveName;
@property(nonatomic) unsigned int messageCnt; // @dynamic messageCnt;
@property(nonatomic) unsigned int onlineCnt; // @dynamic onlineCnt;
@property(retain, nonatomic) NSString *replayUrl; // @dynamic replayUrl;
@property(retain, nonatomic) NSMutableArray *roomIdList; // @dynamic roomIdList;
@property(retain, nonatomic) NSString *sdkUserId; // @dynamic sdkUserId;
@property(nonatomic) unsigned int status; // @dynamic status;

@end

