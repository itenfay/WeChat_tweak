//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMFinderLiveTaskId, MMLiveActionSheetFlowLayoutView, MMLiveShopShelfDragBar, MMScrollActionSheetItemView, NSArray, NSString, UIPanGestureRecognizer, WCFinderLiveAnchorLogReporter, WCLiveScrollActionSheetViewModel;

@interface WCLiveScrollActionSheet
{
    _Bool _isInStopState;
    _Bool _isAnchorShare;
    _Bool _isConnectMicEnabled;
    _Bool _isCameraClosed;
    CDUnknownBlockType _redDotQueryBlock;
    CDUnknownBlockType _redDotCtrlInfoQueryBlock;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
    unsigned long long _showType;
    WCLiveScrollActionSheetViewModel *_sheetVM;
    long long _liveShareScene;
    MMFinderLiveTaskId *_liveTaskId;
    MMLiveActionSheetFlowLayoutView *_anchorOrAssistantFlowLayoutView;
    NSArray *_sctionTitleArray;
    UIPanGestureRecognizer *_panGesture;
    MMLiveShopShelfDragBar *_dragBar;
    MMFinderLiveTask *_finderLiveTask;
    MMScrollActionSheetItemView *_firstItemViewWithRedDot;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMScrollActionSheetItemView *firstItemViewWithRedDot; // @synthesize firstItemViewWithRedDot=_firstItemViewWithRedDot;
@property(retain, nonatomic) MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) NSArray *sctionTitleArray; // @synthesize sctionTitleArray=_sctionTitleArray;
@property(retain, nonatomic) MMLiveActionSheetFlowLayoutView *anchorOrAssistantFlowLayoutView; // @synthesize anchorOrAssistantFlowLayoutView=_anchorOrAssistantFlowLayoutView;
@property(readonly, nonatomic) _Bool isCameraClosed; // @synthesize isCameraClosed=_isCameraClosed;
@property(readonly, nonatomic) _Bool isConnectMicEnabled; // @synthesize isConnectMicEnabled=_isConnectMicEnabled;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) long long liveShareScene; // @synthesize liveShareScene=_liveShareScene;
@property(retain, nonatomic) WCLiveScrollActionSheetViewModel *sheetVM; // @synthesize sheetVM=_sheetVM;
@property(nonatomic) _Bool isAnchorShare; // @synthesize isAnchorShare=_isAnchorShare;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(nonatomic) _Bool isInStopState; // @synthesize isInStopState=_isInStopState;
@property(copy, nonatomic) CDUnknownBlockType redDotCtrlInfoQueryBlock; // @synthesize redDotCtrlInfoQueryBlock=_redDotCtrlInfoQueryBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
- (id)audienceLogReporter;
- (void)reportAudienceOperation:(id)arg1 isClick:(_Bool)arg2;
- (void)reportShareExposeWithEid:(id)arg1;
- (_Bool)shouldShowMoreRedDotForAnchorAtPath:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)shouldShowMoreRedDotForAudienceAtPath:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)shouldShowMoreRedDotForAssistantAtPath:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)shouldShowMoreRedDotAtPath:(id)arg1 type:(unsigned long long)arg2 moreFuncItems:(id)arg3;
- (void)handleContentGestureEnd;
- (void)handleContentGestureChangeTo:(double)arg1;
- (id)getHeaderView;
- (void)handlePopPanGesture:(id)arg1;
- (_Bool)showNewStyle;
- (id)getCurrentSctionTitleArray;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setUpEdgePanGesture;
- (_Bool)hasShowAudienceMoreFunction;
- (void)reportForSensitiveItemSelect;
- (void)reportForSensitiveItemExpose;
- (double)extraItemViewSpacingForScrollView:(id)arg1;
- (void)configItemView:(id)arg1 withItem:(id)arg2;
- (void)reportForChangeAppSceneItemExpose;
- (id)itemArray;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)reportNewAnchorTaskSubPathWithType:(unsigned int)arg1;
- (void)reportAnchorActionSheetItems:(id)arg1;
- (id)liveTask;
- (id)getClarityItemSubTitleWithCdnStreamList:(id)arg1 andLiveTask:(id)arg2;
- (_Bool)handleConnectMic;
- (_Bool)disableScrollSheetItem:(long long)arg1;
- (double)getMaxHeight;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (_Bool)shouldShowAnchorTaskGuide:(id)arg1;
- (void)setSubPath:(id)arg1;
- (id)getChangeAppSceneItem;
- (id)loadItemArrayForAssistant;
- (id)loadItemArrayForAnchor;
- (id)loadItemArrayForAudience;
- (id)loadActivityItemArray;
- (void)loadData;
- (void)reloadMenuData;
- (void)updateWithAnchorShare:(_Bool)arg1;
- (void)changeFlowLayoutView;
- (id)initWithLiveTaskId:(id)arg1 showType:(unsigned long long)arg2 redDotQueryBlock:(CDUnknownBlockType)arg3 redDotCtrlInfoQueryBlock:(CDUnknownBlockType)arg4 isAnchorShare:(_Bool)arg5 liveShareScene:(long long)arg6;
- (id)initWithLiveTaskId:(id)arg1 showType:(unsigned long long)arg2 redDotQueryBlock:(CDUnknownBlockType)arg3 redDotCtrlInfoQueryBlock:(CDUnknownBlockType)arg4 isAnchorShare:(_Bool)arg5;
- (id)initWithLiveTaskId:(id)arg1 showType:(unsigned long long)arg2;
- (id)initWithLiveTaskId:(id)arg1;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

