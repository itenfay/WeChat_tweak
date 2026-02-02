//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderGetMsgSessionIdRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *liveContactExtInfo; // @dynamic liveContactExtInfo;
@property(retain, nonatomic) NSData *mmlistenBypassBuffer; // @dynamic mmlistenBypassBuffer;
@property(nonatomic) unsigned int myAccountType; // @dynamic myAccountType;
@property(retain, nonatomic) NSString *myAccountUsername; // @dynamic myAccountUsername;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) _Bool supportAlias; // @dynamic supportAlias;
@property(nonatomic) unsigned long long svrMentionId; // @dynamic svrMentionId;
@property(nonatomic) unsigned long long toBulletCommentId; // @dynamic toBulletCommentId;
@property(nonatomic) unsigned long long toCommentId; // @dynamic toCommentId;
@property(retain, nonatomic) NSString *toFansId; // @dynamic toFansId;
@property(retain, nonatomic) NSString *toFavId; // @dynamic toFavId;
@property(nonatomic) unsigned long long toLikeId; // @dynamic toLikeId;
@property(retain, nonatomic) NSString *toLotteryId; // @dynamic toLotteryId;
@property(nonatomic) unsigned long long toObjectId; // @dynamic toObjectId;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;
@property(nonatomic) unsigned int userpageEnterType; // @dynamic userpageEnterType;
@property(nonatomic) unsigned int userpageLastCommentScene; // @dynamic userpageLastCommentScene;

@end

