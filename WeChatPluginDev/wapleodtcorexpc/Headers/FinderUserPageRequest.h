//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderUserPageReqPreload, NSData, NSString;

@interface FinderUserPageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUsername; // @dynamic bizUsername;
@property(nonatomic) unsigned int direction; // @dynamic direction;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(nonatomic) unsigned long long fromCollectionId; // @dynamic fromCollectionId;
@property(nonatomic) unsigned int fromNewTab; // @dynamic fromNewTab;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *liveNoticeId; // @dynamic liveNoticeId;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned long long maxId; // @dynamic maxId;
@property(nonatomic) unsigned int needFansCount; // @dynamic needFansCount;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *opensdkAppid; // @dynamic opensdkAppid;
@property(retain, nonatomic) FinderUserPageReqPreload *preload; // @dynamic preload;
@property(nonatomic) unsigned long long refLiveObjectId; // @dynamic refLiveObjectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *sectionBuffer; // @dynamic sectionBuffer;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(nonatomic) unsigned int tabType; // @dynamic tabType;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(retain, nonatomic) NSData *upLastbuffer; // @dynamic upLastbuffer;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

