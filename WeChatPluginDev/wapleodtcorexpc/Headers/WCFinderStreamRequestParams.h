//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClientStatus, FinderCommByPass, FinderSubTabItem, FinderSyncTipsShowInfo, NSArray, NSData, NSMutableArray, NSString, StreamBackupRequest, WCFinderLocationInfo, WCFinderOpenTimelineParams, WCFinderStreamEntranceReportModel, WCFinderTipsShowEntranceExtInfo;

@interface WCFinderStreamRequestParams : NSObject
{
    _Bool _objectFeedIsNotTop;
    _Bool _prefetchConsumedFlag;
    _Bool _hotTabNeedTopRefresh;
    _Bool _isByFindPage;
    _Bool _dontCacheResultPage;
    int _specialRequestScene;
    unsigned int _enterProb;
    FinderClientStatus *_clientStatus;
    WCFinderLocationInfo *_location;
    unsigned long long _objectID;
    NSString *_nonceID;
    FinderSyncTipsShowInfo *_bubbleInfo;
    NSMutableArray *_stats;
    NSString *_partialExposedObjectId;
    NSMutableArray *_unreadItems;
    NSArray *_unreadCacheTidArray;
    NSString *_tabTipsUsername;
    NSData *_rerankLastBuffer;
    NSData *_tabTipsByPassInfo;
    NSString *_tabTipsPath;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTLParams;
    NSData *_cardBuffer;
    NSMutableArray *_topObjects;
    FinderCommByPass *_commByPass;
    WCFinderStreamEntranceReportModel *_entranceReportModel;
    NSString *_fluencyReportSceneKey;
    NSArray *_otherTabUnreadCacheFeeds;
    NSData *_hotTabLastBuff;
    NSArray *_addStatsFeedArray;
    NSString *_relateTid;
    NSString *_relateNonceId;
    unsigned long long _relateRequestScene;
    FinderSubTabItem *_subTabItem;
    WCFinderTipsShowEntranceExtInfo *_finderEntranceExtInfo;
    StreamBackupRequest *_backupRequest;
}

+ (id)genFinderUnreadItemsFromFinderDataItems:(id)arg1 tabType:(int)arg2 commentScene:(int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) StreamBackupRequest *backupRequest; // @synthesize backupRequest=_backupRequest;
@property(retain, nonatomic) WCFinderTipsShowEntranceExtInfo *finderEntranceExtInfo; // @synthesize finderEntranceExtInfo=_finderEntranceExtInfo;
@property(retain, nonatomic) FinderSubTabItem *subTabItem; // @synthesize subTabItem=_subTabItem;
@property(nonatomic) unsigned long long relateRequestScene; // @synthesize relateRequestScene=_relateRequestScene;
@property(copy, nonatomic) NSString *relateNonceId; // @synthesize relateNonceId=_relateNonceId;
@property(copy, nonatomic) NSString *relateTid; // @synthesize relateTid=_relateTid;
@property(nonatomic) _Bool dontCacheResultPage; // @synthesize dontCacheResultPage=_dontCacheResultPage;
@property(nonatomic) _Bool isByFindPage; // @synthesize isByFindPage=_isByFindPage;
@property(retain, nonatomic) NSArray *addStatsFeedArray; // @synthesize addStatsFeedArray=_addStatsFeedArray;
@property(nonatomic) _Bool hotTabNeedTopRefresh; // @synthesize hotTabNeedTopRefresh=_hotTabNeedTopRefresh;
@property(retain, nonatomic) NSData *hotTabLastBuff; // @synthesize hotTabLastBuff=_hotTabLastBuff;
@property(retain, nonatomic) NSArray *otherTabUnreadCacheFeeds; // @synthesize otherTabUnreadCacheFeeds=_otherTabUnreadCacheFeeds;
@property(copy, nonatomic) NSString *fluencyReportSceneKey; // @synthesize fluencyReportSceneKey=_fluencyReportSceneKey;
@property(retain, nonatomic) WCFinderStreamEntranceReportModel *entranceReportModel; // @synthesize entranceReportModel=_entranceReportModel;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @synthesize commByPass=_commByPass;
@property(retain, nonatomic) NSMutableArray *topObjects; // @synthesize topObjects=_topObjects;
@property(retain, nonatomic) NSData *cardBuffer; // @synthesize cardBuffer=_cardBuffer;
@property(nonatomic) unsigned int enterProb; // @synthesize enterProb=_enterProb;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTLParams; // @synthesize openTLParams=_openTLParams;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(copy, nonatomic) NSString *tabTipsPath; // @synthesize tabTipsPath=_tabTipsPath;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @synthesize tabTipsByPassInfo=_tabTipsByPassInfo;
@property(retain, nonatomic) NSData *rerankLastBuffer; // @synthesize rerankLastBuffer=_rerankLastBuffer;
@property(nonatomic) _Bool prefetchConsumedFlag; // @synthesize prefetchConsumedFlag=_prefetchConsumedFlag;
@property(copy, nonatomic) NSString *tabTipsUsername; // @synthesize tabTipsUsername=_tabTipsUsername;
@property(nonatomic) int specialRequestScene; // @synthesize specialRequestScene=_specialRequestScene;
@property(retain, nonatomic) NSArray *unreadCacheTidArray; // @synthesize unreadCacheTidArray=_unreadCacheTidArray;
@property(retain, nonatomic) NSMutableArray *unreadItems; // @synthesize unreadItems=_unreadItems;
@property(copy, nonatomic) NSString *partialExposedObjectId; // @synthesize partialExposedObjectId=_partialExposedObjectId;
@property(retain, nonatomic) NSMutableArray *stats; // @synthesize stats=_stats;
@property(retain, nonatomic) FinderSyncTipsShowInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) _Bool objectFeedIsNotTop; // @synthesize objectFeedIsNotTop=_objectFeedIsNotTop;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) WCFinderLocationInfo *location; // @synthesize location=_location;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
- (id)getFinderUnreadItemsWithTabType:(int)arg1 commentScene:(int)arg2;
- (id)init;

@end

