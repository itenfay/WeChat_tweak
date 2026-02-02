//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FeedsPreviewJoinLiveMultiStyleInfo, FinderBaseRequest, FinderJoinLiveTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FinderLiveDynamicCardVersion, FinderLiveReportBaseInfo, NSData, NSString;

@interface FinderJoinLiveReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus; // @dynamic beforeJoinLiveRoomStatus;
@property(retain, nonatomic) FinderLiveClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) FinderLiveDynamicCardVersion *dynamicCardVersion; // @dynamic dynamicCardVersion;
@property(retain, nonatomic) NSString *ecSource; // @dynamic ecSource;
@property(retain, nonatomic) FeedsPreviewJoinLiveMultiStyleInfo *feedsPreviewLiveMultiStyleInfo; // @dynamic feedsPreviewLiveMultiStyleInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderForwardSource; // @dynamic finderForwardSource;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSString *funcMsgReportExtInfo; // @dynamic funcMsgReportExtInfo;
@property(nonatomic) int joinType; // @dynamic joinType;
@property(retain, nonatomic) FinderJoinLiveTabTipsInfo *joinliveTabTipsInfo; // @dynamic joinliveTabTipsInfo;
@property(retain, nonatomic) NSString *joinliveWithPersonalColumnId; // @dynamic joinliveWithPersonalColumnId;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *livePkId; // @dynamic livePkId;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(retain, nonatomic) NSData *liveSei; // @dynamic liveSei;
@property(nonatomic) _Bool needCheckAutoSwipe; // @dynamic needCheckAutoSwipe;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) _Bool onlyPlusUv; // @dynamic onlyPlusUv;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *shareUsername; // @dynamic shareUsername;
@property(retain, nonatomic) NSString *srcUrl; // @dynamic srcUrl;
@property(retain, nonatomic) NSData *uxInfo; // @dynamic uxInfo;

@end

