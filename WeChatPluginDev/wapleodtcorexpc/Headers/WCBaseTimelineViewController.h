//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, MMGrowTextView, MMTableView, MMUILabel, MMURLHandler, NSMutableDictionary, NSString, UIButton, UIImageView, UIView, WCDataItem, WCInputController, WCMomentsClickHandler, WCMomentsInputAreaReportInfo, WCMomentsPageContext, WCUserComment;
@protocol UIViewControllerPreviewing;

@interface WCBaseTimelineViewController
{
    _Bool _actionAreaWrapEnabled;
    _Bool _dynamicTagEnabled;
    _Bool _isStarBrowsingEnabled;
    unsigned int _commentWordLimit;
    WCMomentsClickHandler *_clickHandler;
    MMURLHandler *_urlHandler;
    MMTableView *_tableView;
    WCDataItem *_inputDataItem;
    WCUserComment *_inputRefComment;
    WCInputController *_inputController;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    long long _lastRemainWordCount;
    UIView *_backgroundView;
    UIImageView *_inputToolView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_atButton;
    MMGrowTextView *_growTextView;
    id <UIViewControllerPreviewing> _previewingContext;
    WCMomentsPageContext *_pageContext;
    WCMomentsInputAreaReportInfo *_inputAreaReportInfo;
    NSMutableDictionary *_cellHeightCache;
    NSMutableDictionary *_cellShowItemCache;
    NSMutableDictionary *_hasPredownload;
    long long _focusedCellMatchingMode;
    long long _videoAutoPlayType;
    struct CGPoint _userScrollingVelocity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint userScrollingVelocity; // @synthesize userScrollingVelocity=_userScrollingVelocity;
@property(nonatomic) long long videoAutoPlayType; // @synthesize videoAutoPlayType=_videoAutoPlayType;
@property(nonatomic) long long focusedCellMatchingMode; // @synthesize focusedCellMatchingMode=_focusedCellMatchingMode;
@property(retain, nonatomic) NSMutableDictionary *hasPredownload; // @synthesize hasPredownload=_hasPredownload;
@property(retain, nonatomic) NSMutableDictionary *cellShowItemCache; // @synthesize cellShowItemCache=_cellShowItemCache;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(nonatomic) _Bool isStarBrowsingEnabled; // @synthesize isStarBrowsingEnabled=_isStarBrowsingEnabled;
@property(nonatomic) _Bool dynamicTagEnabled; // @synthesize dynamicTagEnabled=_dynamicTagEnabled;
@property(nonatomic) _Bool actionAreaWrapEnabled; // @synthesize actionAreaWrapEnabled=_actionAreaWrapEnabled;
@property(retain, nonatomic) WCMomentsInputAreaReportInfo *inputAreaReportInfo; // @synthesize inputAreaReportInfo=_inputAreaReportInfo;
@property(readonly, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIButton *atButton; // @synthesize atButton=_atButton;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIImageView *inputToolView; // @synthesize inputToolView=_inputToolView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long lastRemainWordCount; // @synthesize lastRemainWordCount=_lastRemainWordCount;
@property(retain, nonatomic) MMUILabel *remainWordCountLabel; // @synthesize remainWordCountLabel=_remainWordCountLabel;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) WCUserComment *inputRefComment; // @synthesize inputRefComment=_inputRefComment;
@property(retain, nonatomic) WCDataItem *inputDataItem; // @synthesize inputDataItem=_inputDataItem;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int commentWordLimit; // @synthesize commentWordLimit=_commentWordLimit;
@property(retain, nonatomic) MMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
- (void)updateInputColorWithInputDataItem:(id)arg1;
- (id)visibleLiveShareViewViewWithTid:(id)arg1;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)reportPossibleTextStateIconClick:(long long)arg1 contact:(id)arg2;
- (int)contactFromSceneFromClickScene:(long long)arg1;
- (void)showDebugInfoIfNeeded:(id)arg1 title:(id)arg2 attachKey:(id)arg3;
- (void)addDebugOptionToActionSheetIfNeeded:(id)arg1;
- (void)openSettingTranslateLanguageVCForDataItem:(id)arg1 comment:(id)arg2;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (_Bool)isUsingSplitViewShowTimeline;
- (void)tryFixInputViewUIForIpadWhenRotate;
- (void)onTraitCollectionDidChange:(id)arg1 delegate:(id)arg2;
- (void)onPreviewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)onPreviewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2 refDataItem:(id)arg3 likeHandler:(CDUnknownBlockType)arg4 commentHandler:(CDUnknownBlockType)arg5 favHandler:(CDUnknownBlockType)arg6;
- (void)reRegisterPreviewContext:(id)arg1;
- (void)openTopicWithQuery:(id)arg1 dataItem:(id)arg2 userComment:(id)arg3;
- (void)setupInputAreaReportInfo;
- (id)safeProfileContactWithUserName:(id)arg1 displayname:(id)arg2;
- (void)trySetEmotionSupport:(_Bool)arg1;
- (void)resetInputControllerComponents;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)updateWordCnt:(long long)arg1;
- (void)initEmoticonView;
- (void)initBackgroundView;
- (void)setInputAtButtonImage:(id)arg1;
- (void)initInputToolView:(SEL)arg1 expressionButtonSelector:(SEL)arg2;
- (void)ensureInitInputView:(id)arg1 atButtonSelector:(SEL)arg2 expressionButtonSelector:(SEL)arg3;
- (id)blankAttributedTipsWithFont:(id)arg1;
- (id)blankRichTips;
- (id)blankTips;
- (id)findCommentCellViewWithDataItem:(id)arg1 commentItem:(id)arg2;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (id)indexPathOfDataItem:(id)arg1;
- (id)visibleTimelineCommentCellWithComment:(id)arg1;
- (id)visibleTimelineCommentCellWithCommentIndex:(unsigned long long)arg1 dataItem:(id)arg2;
- (id)visibleTimeLineCellViewWithTid:(id)arg1;
- (struct CGPoint)targetTableViewContentOffsetWithTopLocation:(struct CGPoint)arg1 bottomLocation:(struct CGPoint)arg2;
- (void)_updateContentOffsetIfNeededWithTopLocation:(struct CGPoint)arg1 bottomLocation:(struct CGPoint)arg2;
- (double)footerCellHeightChangeWithDataItem:(id)arg1 deleteComment:(id)arg2;
- (void)updateContentOffsetIfNeededForDeleteComment:(unsigned long long)arg1 dataItem:(id)arg2;
- (void)updateContentOffsetIfNeededForShowOriginalTextFromTranlateWithDataItem:(id)arg1;
- (struct CGPoint)targetTableViewContentOffsetWithDeleteDataItem:(id)arg1;
- (void)updateContentOffsetIfNeededForPackupDataItem:(id)arg1;
- (id)getHotEreaCellViewIn:(id)arg1 withType:(id)arg2 videoAutoPlayType:(long long)arg3;
- (id)getBestCellViewWithMinDistance:(id)arg1 videoAutoPlayType:(long long)arg2;
- (_Bool)isMainContentFullyVisible:(struct CGRect)arg1;
- (void)updateUserScrollingVelocity:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isUserScrollingToBottom;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)hideAlbumListLineViewInCell:(id)arg1;
- (void)resetAlbumListLineViewsFrameInCell:(id)arg1 indexPath:(id)arg2;
- (double)getCellLineContentMarginCurOri;
- (id)tableViewWithDataProvider:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)visibleTimelineCellViewDidDisappear;
- (void)visibleTimelineCellViewWillAppear;
- (void)restoreThumbnailHiddenStateIfNeeded;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)removeObserverForMenuNotification;
- (void)addObserverForMenuNotification;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
@property(readonly, nonatomic) WCMomentsClickHandler *clickHandler; // @synthesize clickHandler=_clickHandler;
- (void)cleanCellHeightCache:(id)arg1;
- (id)actionAreaVMOfTimelineCellInCache:(id)arg1;
- (id)heightOfTimelineCellInCache:(id)arg1;
- (void)initCaches;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

