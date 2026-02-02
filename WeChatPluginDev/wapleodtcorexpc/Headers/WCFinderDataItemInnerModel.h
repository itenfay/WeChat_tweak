//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderAudienceReserveLiveNotification, FinderCollectionInfo, FinderEnhanceTypeList, FinderFlowCardRecommendReason, FinderMemberData, FinderModFeedInfo, FinderMusicRealtimeInfo, FinderNewLifeDesc, FinderObjectExtend, FinderObjectMemberInfo, FinderObjectOriginalInfo, FinderObjectPlaceHolderInfo, FinderObjectWordingInfo, FinderOriginalDesc, FinderPlayHistoryInfo, FinderPostTraceInfo, FinderPromotionJumpInfo, FinderSimpleTopicInfo, NSData, NSMutableArray, NSString, OriginalSoundInfo, VideoEncodeTask, WCFinderFeedBindEventInfo, WCFinderGeneralReportModel, WCFinderIpRegionInfo, WCFinderMemberShipQAItem, WCFinderObjectHighlightInfo, WCFinderPreviewEditVideoCompositionTask;

@interface WCFinderDataItemInnerModel : NSObject
{
    _Bool _isBlocked;
    _Bool _showOriginalTag;
    _Bool _postWithMemberZoneLink;
    unsigned int _funcFlag;
    unsigned int _cardShowTime;
    unsigned int _friendFavCount;
    WCFinderPreviewEditVideoCompositionTask *_compositionTask;
    NSString *_wxStatusIconId;
    FinderObjectPlaceHolderInfo *_placeHolderInfo;
    WCFinderGeneralReportModel *_generalReportModel;
    OriginalSoundInfo *_originalSoundInfo;
    unsigned long long _blockCgiFlag;
    NSString *_innerRecommendReason;
    FinderPlayHistoryInfo *_playHistoryInfo;
    FinderPromotionJumpInfo *_finderPromotionJumpinfo;
    WCFinderObjectHighlightInfo *_highlightInfo;
    unsigned long long _validTimeForCacheFeed;
    WCFinderFeedBindEventInfo *_eventInfo;
    FinderModFeedInfo *_modfeedInfo;
    FinderSimpleTopicInfo *_simpleTopicInfo;
    double _shareCoverTime;
    FinderMusicRealtimeInfo *_musicRealtimeInfo;
    FinderObjectWordingInfo *_asyncRecommendInfo;
    unsigned long long _postFlag;
    WCFinderIpRegionInfo *_ipRegionInfo;
    FinderEnhanceTypeList *_enhanceConfiguration;
    FinderCollectionInfo *_collectionInfo;
    FinderObjectExtend *_objectExtend;
    unsigned long long _postFromScene;
    unsigned long long _feedSource;
    NSString *_compositionTaskId;
    VideoEncodeTask *_encodeTask;
    FinderFlowCardRecommendReason *_flowCardRecommandReasonInfo;
    NSData *_sdkMediaFeature;
    unsigned long long _likeStateFetchTimeStamp;
    unsigned long long _compressCount;
    NSString *_joinLiveColumnId;
    FinderAudienceReserveLiveNotification *_reserveLiveNotificationInfo;
    FinderOriginalDesc *_originalDesc;
    unsigned long long _postSubType;
    FinderPostTraceInfo *_postTraceInfo;
    unsigned long long _enterScene;
    unsigned long long _sourceEnterScene;
    FinderObjectMemberInfo *_objectMemberInfo;
    NSString *_postClientId;
    long long _lastPostConfirmTimeStamp;
    NSMutableArray *_lotteryAttendTypeList;
    NSString *_routeTraceKey;
    long long _lastErrorCode;
    long long _globalFavFlag;
    FinderObjectOriginalInfo *_originalInfo;
    unsigned long long _tagType;
    NSString *_tagSecKey;
    FinderNewLifeDesc *_finderNewLifeDesc;
    WCFinderMemberShipQAItem *_finderMemberShipQAItem;
    FinderMemberData *_finderMemberData;
    NSString *_gameClientParams;
    double _compressDuration;
}

+ (void)backfillReportInfoFromOld:(id)arg1 newModel:(id)arg2;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_shareCoverTime;
+ (void)PBArrayAdd_simpleTopicInfo;
+ (void)PBArrayAdd_modfeedInfo;
+ (void)PBArrayAdd_feedSource;
+ (void)PBArrayAdd_sourceEnterScene;
+ (void)PBArrayAdd_tagSecKey;
+ (void)PBArrayAdd_tagType;
+ (void)PBArrayAdd_finderMemberData;
+ (void)PBArrayAdd_originalInfo;
+ (void)PBArrayAdd_globalFavFlag;
+ (void)PBArrayAdd_postWithMemberZoneLink;
+ (void)PBArrayAdd_routeTraceKey;
+ (void)PBArrayAdd_finderMemberShipQAItem;
+ (void)PBArrayAdd_lastErrorCode;
+ (void)PBArrayAdd_lastPostConfirmTimeStamp;
+ (void)PBArrayAdd_postClientId;
+ (void)PBArrayAdd_finderNewLifeDesc;
+ (void)PBArrayAdd_objectMemberInfo;
+ (void)PBArrayAdd_enterScene;
+ (void)PBArrayAdd_postTraceInfo;
+ (void)PBArrayAdd_postSubType;
+ (void)PBArrayAdd_reserveLiveNotificationInfo;
+ (void)PBArrayAdd_eventInfo;
+ (void)PBArrayAdd_validTimeForCacheFeed;
+ (void)PBArrayAdd_cardShowTime;
+ (void)PBArrayAdd_originalDesc;
+ (void)PBArrayAdd_compressDuration;
+ (void)PBArrayAdd_compressCount;
+ (void)PBArrayAdd_likeStateFetchTimeStamp;
+ (void)PBArrayAdd_flowCardRecommandReasonInfo;
+ (void)PBArrayAdd_sdkMediaFeature;
+ (void)PBArrayAdd_postFromScene;
+ (void)PBArrayAdd_compositionTaskId;
+ (void)PBArrayAdd_objectExtend;
+ (void)PBArrayAdd_friendFavCount;
+ (void)PBArrayAdd_ipRegionInfo;
+ (void)PBArrayAdd_postFlag;
+ (void)PBArrayAdd_showOriginalTag;
+ (void)PBArrayAdd_finderPromotionJumpinfo;
+ (void)PBArrayAdd_playHistoryInfo;
+ (void)PBArrayAdd_musicRealtimeInfo;
+ (void)PBArrayAdd_innerRecommendReason;
+ (void)PBArrayAdd_blockCgiFlag;
+ (void)PBArrayAdd_originalSoundInfo;
+ (void)PBArrayAdd_generalReportModel;
+ (void)PBArrayAdd_isBlocked;
+ (void)PBArrayAdd_placeHolderInfo;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_wxStatusIconId;
- (void).cxx_destruct;
@property(nonatomic) double compressDuration; // @synthesize compressDuration=_compressDuration;
@property(retain, nonatomic) NSString *gameClientParams; // @synthesize gameClientParams=_gameClientParams;
@property(retain, nonatomic) FinderMemberData *finderMemberData; // @synthesize finderMemberData=_finderMemberData;
@property(retain, nonatomic) WCFinderMemberShipQAItem *finderMemberShipQAItem; // @synthesize finderMemberShipQAItem=_finderMemberShipQAItem;
@property(retain, nonatomic) FinderNewLifeDesc *finderNewLifeDesc; // @synthesize finderNewLifeDesc=_finderNewLifeDesc;
@property(copy, nonatomic) NSString *tagSecKey; // @synthesize tagSecKey=_tagSecKey;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(retain, nonatomic) FinderObjectOriginalInfo *originalInfo; // @synthesize originalInfo=_originalInfo;
@property(nonatomic) long long globalFavFlag; // @synthesize globalFavFlag=_globalFavFlag;
@property(nonatomic) _Bool postWithMemberZoneLink; // @synthesize postWithMemberZoneLink=_postWithMemberZoneLink;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(copy, nonatomic) NSString *routeTraceKey; // @synthesize routeTraceKey=_routeTraceKey;
@property(retain, nonatomic) NSMutableArray *lotteryAttendTypeList; // @synthesize lotteryAttendTypeList=_lotteryAttendTypeList;
@property(nonatomic) long long lastPostConfirmTimeStamp; // @synthesize lastPostConfirmTimeStamp=_lastPostConfirmTimeStamp;
@property(copy, nonatomic) NSString *postClientId; // @synthesize postClientId=_postClientId;
@property(retain, nonatomic) FinderObjectMemberInfo *objectMemberInfo; // @synthesize objectMemberInfo=_objectMemberInfo;
@property(nonatomic) unsigned long long sourceEnterScene; // @synthesize sourceEnterScene=_sourceEnterScene;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) FinderPostTraceInfo *postTraceInfo; // @synthesize postTraceInfo=_postTraceInfo;
@property(nonatomic) unsigned long long postSubType; // @synthesize postSubType=_postSubType;
@property(retain, nonatomic) FinderOriginalDesc *originalDesc; // @synthesize originalDesc=_originalDesc;
@property(retain, nonatomic) FinderAudienceReserveLiveNotification *reserveLiveNotificationInfo; // @synthesize reserveLiveNotificationInfo=_reserveLiveNotificationInfo;
@property(retain, nonatomic) NSString *joinLiveColumnId; // @synthesize joinLiveColumnId=_joinLiveColumnId;
@property(nonatomic) unsigned long long compressCount; // @synthesize compressCount=_compressCount;
@property(nonatomic) unsigned long long likeStateFetchTimeStamp; // @synthesize likeStateFetchTimeStamp=_likeStateFetchTimeStamp;
@property(retain, nonatomic) NSData *sdkMediaFeature; // @synthesize sdkMediaFeature=_sdkMediaFeature;
@property(retain, nonatomic) FinderFlowCardRecommendReason *flowCardRecommandReasonInfo; // @synthesize flowCardRecommandReasonInfo=_flowCardRecommandReasonInfo;
@property(retain, nonatomic) VideoEncodeTask *encodeTask; // @synthesize encodeTask=_encodeTask;
@property(copy, nonatomic) NSString *compositionTaskId; // @synthesize compositionTaskId=_compositionTaskId;
@property(nonatomic) unsigned long long feedSource; // @synthesize feedSource=_feedSource;
@property(nonatomic) unsigned long long postFromScene; // @synthesize postFromScene=_postFromScene;
@property(retain, nonatomic) FinderObjectExtend *objectExtend; // @synthesize objectExtend=_objectExtend;
@property(retain, nonatomic) FinderCollectionInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(nonatomic) unsigned int friendFavCount; // @synthesize friendFavCount=_friendFavCount;
@property(retain, nonatomic) FinderEnhanceTypeList *enhanceConfiguration; // @synthesize enhanceConfiguration=_enhanceConfiguration;
@property(retain, nonatomic) WCFinderIpRegionInfo *ipRegionInfo; // @synthesize ipRegionInfo=_ipRegionInfo;
@property(nonatomic) unsigned long long postFlag; // @synthesize postFlag=_postFlag;
@property(nonatomic) _Bool showOriginalTag; // @synthesize showOriginalTag=_showOriginalTag;
@property(retain, nonatomic) FinderObjectWordingInfo *asyncRecommendInfo; // @synthesize asyncRecommendInfo=_asyncRecommendInfo;
@property(retain, nonatomic) FinderMusicRealtimeInfo *musicRealtimeInfo; // @synthesize musicRealtimeInfo=_musicRealtimeInfo;
@property(nonatomic) double shareCoverTime; // @synthesize shareCoverTime=_shareCoverTime;
@property(retain, nonatomic) FinderSimpleTopicInfo *simpleTopicInfo; // @synthesize simpleTopicInfo=_simpleTopicInfo;
@property(retain, nonatomic) FinderModFeedInfo *modfeedInfo; // @synthesize modfeedInfo=_modfeedInfo;
@property(retain, nonatomic) WCFinderFeedBindEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) unsigned long long validTimeForCacheFeed; // @synthesize validTimeForCacheFeed=_validTimeForCacheFeed;
@property(retain, nonatomic) WCFinderObjectHighlightInfo *highlightInfo; // @synthesize highlightInfo=_highlightInfo;
@property(retain, nonatomic) FinderPromotionJumpInfo *finderPromotionJumpinfo; // @synthesize finderPromotionJumpinfo=_finderPromotionJumpinfo;
@property(retain, nonatomic) FinderPlayHistoryInfo *playHistoryInfo; // @synthesize playHistoryInfo=_playHistoryInfo;
@property(copy, nonatomic) NSString *innerRecommendReason; // @synthesize innerRecommendReason=_innerRecommendReason;
@property(nonatomic) unsigned long long blockCgiFlag; // @synthesize blockCgiFlag=_blockCgiFlag;
@property(retain, nonatomic) OriginalSoundInfo *originalSoundInfo; // @synthesize originalSoundInfo=_originalSoundInfo;
@property(retain, nonatomic) WCFinderGeneralReportModel *generalReportModel; // @synthesize generalReportModel=_generalReportModel;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(retain, nonatomic) FinderObjectPlaceHolderInfo *placeHolderInfo; // @synthesize placeHolderInfo=_placeHolderInfo;
@property(nonatomic) unsigned int cardShowTime; // @synthesize cardShowTime=_cardShowTime;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(retain, nonatomic) NSString *wxStatusIconId; // @synthesize wxStatusIconId=_wxStatusIconId;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *internalClickCopyMsg;
@property(retain, nonatomic) WCFinderPreviewEditVideoCompositionTask *compositionTask; // @synthesize compositionTask=_compositionTask;
- (_Bool)useBrandIdentityToShowFirstComment;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

