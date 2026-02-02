//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderSyncTipsShowInfo, NSString, NewLifeSwitchLogic, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo, WSRedPointCtrlInfo;

@interface WebSearchRedotMgr
{
    WSRedPointCtrlInfo *_ctrlInfo;
    unsigned long long _reddotTriggerJumpColumn;
    FinderSyncTipsShowInfo *_reddotTriggerJumpColumnTipsInfo;
    WCFinderRedDotTipsShowInfo *_reddotTriggerJumpColumnShowInfo;
    WCFinderRedDotCtrlInfo *_reddotTriggerJumpColumnCtrlInfo;
    NewLifeSwitchLogic *_newlifeSwiftLogic;
}

+ (unsigned long long)GenReddotVisionTypeFromCategoryNum:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeSwitchLogic *newlifeSwiftLogic; // @synthesize newlifeSwiftLogic=_newlifeSwiftLogic;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *reddotTriggerJumpColumnCtrlInfo; // @synthesize reddotTriggerJumpColumnCtrlInfo=_reddotTriggerJumpColumnCtrlInfo;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *reddotTriggerJumpColumnShowInfo; // @synthesize reddotTriggerJumpColumnShowInfo=_reddotTriggerJumpColumnShowInfo;
@property(retain, nonatomic) FinderSyncTipsShowInfo *reddotTriggerJumpColumnTipsInfo; // @synthesize reddotTriggerJumpColumnTipsInfo=_reddotTriggerJumpColumnTipsInfo;
@property(nonatomic) unsigned long long reddotTriggerJumpColumn; // @synthesize reddotTriggerJumpColumn=_reddotTriggerJumpColumn;
- (id)getCurrentWeSeeReddotDisplayInFind;
- (id)getCacheKeyFromReddotType:(unsigned long long)arg1;
- (unsigned int)getTopStoryContentReddotStamp:(unsigned long long)arg1;
- (_Bool)cacheTopStoryContentReddotStamp:(unsigned long long)arg1 timestamp:(unsigned int)arg2;
- (void)reddotReportCloseRecommend:(unsigned int)arg1 reddot:(id)arg2;
- (_Bool)handleHaoKanNumReddot:(id)arg1;
- (void)notifyReddotToJs:(id)arg1;
- (_Bool)handleContentReddot:(id)arg1;
- (_Bool)checkContentReddotTabValid:(id)arg1;
- (_Bool)handleWowSettingReddot:(id)arg1;
- (void)checkReport101IfCanDisplay:(id)arg1 reddotType:(unsigned int)arg2;
- (void)dispatchReddotInfo:(id)arg1;
- (void)dispatchRedDotForBrowse:(id)arg1;
- (void)reportRedDotReceivedWithInfo:(id)arg1;
- (void)dispatchRedDotForSearch:(id)arg1;
- (void)saveAndCallExtensionOnReceived:(id)arg1;
- (void)clearReddotTriggerJumpInfo;
- (void)saveReddotCtrlInfo;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updateWowContentWithJsonString:(id)arg1;
- (id)getWSRecommendNumReddotList;
- (unsigned int)getWSRecommendNumReddotCount;
- (id)getWSRecommendNumReddotInfo;
- (id)getWSRedPointInfo:(_Bool)arg1;
- (id)getActiveReddotInfo:(unsigned long long)arg1;
- (id)getWeSeeRedPointInfo:(unsigned long long)arg1;
- (void)tryUpdateSearchReddotClearedTimeStamps:(unsigned int)arg1;
- (void)tryUpdateRecommendReddotClearedTimeStamps:(unsigned int)arg1;
- (void)clearFFBrowseSettingRedot;
- (void)clearFFSearchRedot;
- (void)clearFFBrowseNumRedot:(id)arg1;
- (void)onReddotInfoRemoved;
- (void)clearAllBrowseReddot;
- (void)clearFFBrowseRedot:(unsigned long long)arg1;
- (_Bool)isFFBrowseRedotClearByConsume;
- (_Bool)disableTopRecomemndContentReddotCuzNewlife;
- (_Bool)isReddotEnabled:(id)arg1 forReason:(id *)arg2;
- (_Bool)isReddotEnabled:(id)arg1;
- (_Bool)shouldShowFFBrowseRedot:(id)arg1 forReason:(id *)arg2;
- (_Bool)shouldShowFFBrowseRedDot:(_Bool)arg1;
- (_Bool)shouldShowFFBrowseNumReddotInternal;
- (_Bool)shouldShowFFBrowseNumReddotInDiscover;
- (_Bool)shouldShowFFSearchRedot:(_Bool)arg1;
- (_Bool)shouldShowFindFriendTabRedotForSearch:(_Bool)arg1;
- (_Bool)shouldShowFindFriendTabRedotForRecommend:(_Bool)arg1;
- (void)migration;
- (void)loadData;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

