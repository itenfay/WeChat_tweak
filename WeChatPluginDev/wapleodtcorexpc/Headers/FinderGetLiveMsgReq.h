//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderGetLiveMsgReportInfo, FinderLiveAudienceStatusInfo, FinderLiveBattleReportInfo, FinderLiveBoxId, FinderLiveButtonDisplayInfo, FinderLiveClientStatus, FinderLiveMsgDisplayInfo, FinderLiveReportBaseInfo, FinderLiveSeiStatInfo, NSData, NSString;

@interface FinderGetLiveMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAudienceStatusInfo *audienceStatusInfo; // @dynamic audienceStatusInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBattleReportInfo *battleReportInfo; // @dynamic battleReportInfo;
@property(retain, nonatomic) FinderLiveButtonDisplayInfo *buttonDisplayInfo; // @dynamic buttonDisplayInfo;
@property(retain, nonatomic) FinderLiveBoxId *currentBox; // @dynamic currentBox;
@property(retain, nonatomic) FinderLiveMsgDisplayInfo *displayInfo; // @dynamic displayInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) FinderGetLiveMsgReportInfo *getlivemsgReportInfo; // @dynamic getlivemsgReportInfo;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(retain, nonatomic) NSData *liveSei; // @dynamic liveSei;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) _Bool offline; // @dynamic offline;
@property(nonatomic) unsigned int offlineScene; // @dynamic offlineScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderLiveSeiStatInfo *seiStatInfo; // @dynamic seiStatInfo;
@property(retain, nonatomic) FinderLiveClientStatus *status; // @dynamic status;

@end

