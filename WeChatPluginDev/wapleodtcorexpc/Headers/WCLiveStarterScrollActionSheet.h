//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMFinderLiveTaskId, MMLiveActionSheetFlowLayoutView, MMLiveShopShelfDragBar, MMScrollActionSheetItemView, NSArray, NSString, UIPanGestureRecognizer, WCFinderLiveAnchorLogReporter, WCFinderLiveStarterReporter, WCLiveStarterScrollActionSheetViewModel;

@interface WCLiveStarterScrollActionSheet
{
    _Bool _isCommentEnable;
    _Bool _isMicEnable;
    _Bool _isRewardEnable;
    _Bool _shouldHideRedPacketItem;
    _Bool _shouldHideLinkItem;
    _Bool _shouldHideFansGroupItem;
    _Bool _shouldHideRewardWishItem;
    CDUnknownBlockType _redDotQueryBlock;
    CDUnknownBlockType _redDotCtrlInfoQueryBlock;
    unsigned long long _hiddenItemsFlag;
    WCLiveStarterScrollActionSheetViewModel *_sheetVM;
    MMFinderLiveTaskId *_liveTaskId;
    long long _currVisibilityMode;
    MMLiveActionSheetFlowLayoutView *_anchorFlowLayoutView;
    WCFinderLiveAnchorLogReporter *_reporter;
    WCFinderLiveStarterReporter *_starterReporter;
    MMScrollActionSheetItemView *_firstItemViewWithRedDot;
    NSArray *_sctionTitleArray;
    UIPanGestureRecognizer *_panGesture;
    MMLiveShopShelfDragBar *_dragBar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldHideRewardWishItem; // @synthesize shouldHideRewardWishItem=_shouldHideRewardWishItem;
@property(readonly, nonatomic) _Bool shouldHideFansGroupItem; // @synthesize shouldHideFansGroupItem=_shouldHideFansGroupItem;
@property(readonly, nonatomic) _Bool shouldHideLinkItem; // @synthesize shouldHideLinkItem=_shouldHideLinkItem;
@property(readonly, nonatomic) _Bool shouldHideRedPacketItem; // @synthesize shouldHideRedPacketItem=_shouldHideRedPacketItem;
@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) NSArray *sctionTitleArray; // @synthesize sctionTitleArray=_sctionTitleArray;
@property(nonatomic) __weak MMScrollActionSheetItemView *firstItemViewWithRedDot; // @synthesize firstItemViewWithRedDot=_firstItemViewWithRedDot;
@property(retain, nonatomic) WCFinderLiveStarterReporter *starterReporter; // @synthesize starterReporter=_starterReporter;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMLiveActionSheetFlowLayoutView *anchorFlowLayoutView; // @synthesize anchorFlowLayoutView=_anchorFlowLayoutView;
@property(nonatomic) long long currVisibilityMode; // @synthesize currVisibilityMode=_currVisibilityMode;
@property(nonatomic) _Bool isRewardEnable; // @synthesize isRewardEnable=_isRewardEnable;
@property(nonatomic) _Bool isMicEnable; // @synthesize isMicEnable=_isMicEnable;
@property(nonatomic) _Bool isCommentEnable; // @synthesize isCommentEnable=_isCommentEnable;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) WCLiveStarterScrollActionSheetViewModel *sheetVM; // @synthesize sheetVM=_sheetVM;
@property(nonatomic) unsigned long long hiddenItemsFlag; // @synthesize hiddenItemsFlag=_hiddenItemsFlag;
@property(copy, nonatomic) CDUnknownBlockType redDotCtrlInfoQueryBlock; // @synthesize redDotCtrlInfoQueryBlock=_redDotCtrlInfoQueryBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
- (void)handleContentGestureEnd;
- (void)handleContentGestureChangeTo:(double)arg1;
- (id)getHeaderView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePopPanGesture:(id)arg1;
- (void)setUpEdgePanGesture;
- (void)reportForSensitiveItemSelect;
- (void)reportForSensitiveItemExpose;
- (void)reportQuickReplyExpose;
- (void)configItemView:(id)arg1 withItem:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)showInView:(id)arg1;
- (id)itemArray;
- (void)reportNewAnchorTaskSubPathWithType:(unsigned int)arg1;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (_Bool)shouldShowAnchorTaskGuide:(id)arg1;
- (void)setSubPath:(id)arg1;
- (void)anchorFeedbackEntrance:(id)arg1;
- (void)connectMicItemToRow:(id)arg1;
- (void)rewardWishItemToRow:(id)arg1;
- (void)trafficItemToRow:(id)arg1;
- (void)customizeRewardItemToRow:(id)arg1;
- (void)fansGroupItemToRow:(id)arg1;
- (void)redPacketToRow:(id)arg1;
- (void)linkToRow:(id)arg1;
- (void)anchorLiveNoticeItem:(id)arg1;
- (void)anchorMoreFunctionItem:(id)arg1;
- (void)anchorCommentManageItem:(id)arg1;
- (_Bool)shouldShowMoreRedDotForPath:(id)arg1 type:(unsigned long long)arg2;
- (void)anchorOpPromotionCardItem:(id)arg1;
- (void)creatorCenterEntryTo:(id)arg1;
- (id)loadItemArray;
- (_Bool)isGameLiveMode;
- (void)loadData;
- (id)initWithLiveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

