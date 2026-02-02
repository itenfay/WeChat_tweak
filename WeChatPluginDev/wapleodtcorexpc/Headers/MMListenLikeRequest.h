//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenAppreciateFriendInfo, MMListenReportClientInfo, MMListenThankUserInfo, NSString;

@interface MMListenLikeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int appScene; // @dynamic appScene;
@property(retain, nonatomic) MMListenAppreciateFriendInfo *appreciateFriendInfo; // @dynamic appreciateFriendInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *finderFeedId; // @dynamic finderFeedId;
@property(nonatomic) _Bool isCancel; // @dynamic isCancel;
@property(nonatomic) _Bool isPublic; // @dynamic isPublic;
@property(retain, nonatomic) NSString *likeDesc; // @dynamic likeDesc;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) NSString *qqmusicMid; // @dynamic qqmusicMid;
@property(nonatomic) unsigned long long qqmusicSongId; // @dynamic qqmusicSongId;
@property(retain, nonatomic) MMListenReportClientInfo *reportClientInfo; // @dynamic reportClientInfo;
@property(retain, nonatomic) MMListenThankUserInfo *thankUserInfo; // @dynamic thankUserInfo;
@property(nonatomic) int tingScene; // @dynamic tingScene;
@property(nonatomic) int type; // @dynamic type;

@end

