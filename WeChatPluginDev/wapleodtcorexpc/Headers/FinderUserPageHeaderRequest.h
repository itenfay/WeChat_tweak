//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderUserPageReqPreload, NSString;

@interface FinderUserPageHeaderRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int authorScene; // @dynamic authorScene;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUsername; // @dynamic bizUsername;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *liveNoticeId; // @dynamic liveNoticeId;
@property(nonatomic) unsigned int needFansCount; // @dynamic needFansCount;
@property(retain, nonatomic) FinderUserPageReqPreload *preload; // @dynamic preload;
@property(nonatomic) unsigned long long refLiveObjectId; // @dynamic refLiveObjectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *viewerFinderUsername; // @dynamic viewerFinderUsername;

@end

