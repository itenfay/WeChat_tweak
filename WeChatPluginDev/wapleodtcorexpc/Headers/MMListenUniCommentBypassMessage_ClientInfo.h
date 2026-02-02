//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface MMListenUniCommentBypassMessage_ClientInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *commendLikeUsernameList; // @dynamic commendLikeUsernameList;
@property(nonatomic) int commendLikeUsernameListCnt; // @dynamic commendLikeUsernameListCnt;
@property(retain, nonatomic) NSString *currBaseListenId; // @dynamic currBaseListenId;
@property(retain, nonatomic) NSData *currCategorySession; // @dynamic currCategorySession;
@property(retain, nonatomic) NSString *currListenId; // @dynamic currListenId;
@property(nonatomic) unsigned int currScene; // @dynamic currScene;
@property(retain, nonatomic) NSMutableArray *displayCommendLikeUsernameList; // @dynamic displayCommendLikeUsernameList;
@property(nonatomic) int displayCommendLikeUsernameListCnt; // @dynamic displayCommendLikeUsernameListCnt;
@property(retain, nonatomic) NSData *exploreSessions; // @dynamic exploreSessions;
@property(retain, nonatomic) NSString *fromCategoryId; // @dynamic fromCategoryId;
@property(nonatomic) int isPanelOperate; // @dynamic isPanelOperate;

@end

