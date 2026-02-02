//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, LocationRetriever, NSArray, NSMutableDictionary, NSString, WCNewShareCardLayoutCache, WCShareCardBatchGetMgr, WCShareCardDB, WCShareCardSyncMgr;

@interface WCShareCardMgr
{
    WCShareCardDB *_wcShareCardDB;
    WCShareCardSyncMgr *_wcShareCardSyncMgr;
    WCShareCardBatchGetMgr *_wcShareCardBatchGetMgr;
    LocationRetriever *_locationRetrieve;
    unsigned int _lastLocationTime;
    unsigned int uiLastMarkShareCardEventID;
    NSString *_curHomePageLayoutBuff;
    _Bool _bIsLocalCityLayoutEnd;
    _Bool _bIsOtherCityLayoutEnd;
    _Bool _bIsHomePageFirstPageData;
    NSMutableDictionary *_dicCardForMask;
    WCNewShareCardLayoutCache *_shareCardLayoutCache;
    NSArray *_arrNeedAnimtionCardData;
    CLLocation *_location;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *arrNeedAnimtionCardData; // @synthesize arrNeedAnimtionCardData=_arrNeedAnimtionCardData;
- (void)saveShareCardsToDB:(id)arg1;
- (_Bool)shouldResetLocation;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onBatchGetEnd:(unsigned int)arg1;
- (void)onBatchGetShareCardList:(id)arg1 ErrCode:(int)arg2;
- (void)onWCShareCardSyncEnd;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOnGetHomePageLayoutResp:(id)arg1;
- (void)handleOnGetShareCardConsumedInfoResp:(id)arg1;
- (void)handleOnGetShareCardItemResp:(id)arg1;
- (void)handleOnGetMarkShareCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)keepCachedDataFromOldCard:(id)arg1 toNewCard:(id)arg2;
- (void)internalMarkShareCard:(id)arg1;
- (void)markShareCardByCardId:(id)arg1 mark:(_Bool)arg2 notify:(_Bool)arg3 scene:(int)arg4;
- (void)deleteShareCardByCardIdFromDB:(id)arg1;
- (_Bool)getShareCardByCardTpIdFromDB:(id)arg1 andShareCardList:(id)arg2;
- (void)getShareCardFromSvr:(id)arg1;
- (id)getShareCardByCardIdFromDB:(id)arg1;
- (unsigned int)getShareCardCount:(id)arg1;
- (unsigned int)getValidShareCardCount:(id)arg1;
- (void)shareCardConsumed:(id)arg1 fromScene:(unsigned int)arg2 withCode:(id)arg3;
- (void)doSync;
- (void)clearSyncKey;
- (unsigned int)getShareCardAvailableCount;
- (unsigned int)getShareCardCount;
- (void)tagCardHasBeenRed;
- (void)stopRetrieveLocation;
- (void)startRetrieveLocation;
- (void)getShareCardsHomePageLayoutInternal;
- (_Bool)getShareCardsHomePageLayoutMore;
- (void)getShareCardsHomePageLayout;
- (void)shareCardListToFriend:(id)arg1 consumedboxCardId:(id)arg2 visibleUserList:(id)arg3 invisibleUserList:(id)arg4 visibleTagIDList:(id)arg5 invisibleTagIDList:(id)arg6 staticScene:(unsigned long long)arg7;
- (void)shareCardGetReward:(id)arg1 BrandUsername:(id)arg2 ConsumedBoxID:(id)arg3 visibleUserList:(id)arg4 invisibleUserList:(id)arg5 visibleTagIDList:(id)arg6 invisibleTagIDList:(id)arg7;
- (void)shareCardWithWhoCanSee:(id)arg1 visibleUserList:(id)arg2 invisibleUserList:(id)arg3 visibleTagIDList:(id)arg4 invisibleTagIDList:(id)arg5;
- (void)onAuthOK;
- (_Bool)needShowShareCardEntrance;
- (void)insertOrUpdateWCCard:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)saveShareCardLayoutCacheWithLoacalList:(id)arg1 otherCityList:(id)arg2 cityName:(id)arg3 entryTip:(id)arg4 entryIcons:(id)arg5 entryShowRedDot:(_Bool)arg6 entryShowNew:(_Bool)arg7;
- (_Bool)hasShareCardLayoutCacheData;
- (_Bool)loadShareCardLayoutCache;
@property(readonly, nonatomic) WCNewShareCardLayoutCache *shareCardLayoutCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

