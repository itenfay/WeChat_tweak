//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, FinderLiveBoxId, MMFinderLiveCommentDirectDisplayCellWrapper, MMLiveCommentDataItem, MMLiveCommentPubbleView, MMLiveCommentTableViewModel, MMLiveTaskId, MMLiveUnReadCountView, MMTableView, MMUIButton, NSString, UIPanGestureRecognizer;
@protocol MMFinderLiveCommentBaseContentDelegate;

@interface MMFinderLiveCommentBaseContentView : UIView
{
    _Bool _forbidCommentTableViewScroll;
    _Bool _isSynchronizeLayout;
    _Bool _isInLive;
    _Bool _hasPrepared;
    _Bool _isDisplay;
    _Bool _needTableViewAutoScrollToRereshBeforeRotate;
    _Bool _needTableViewAutoScrollToRereshBeforeMinimize;
    _Bool _needTableViewAutoScrollToRereshBeforeEnterBackground;
    _Bool _needHandleRestoreAfterLayout;
    _Bool _needHandleRestoreAfterMinimize;
    _Bool _needHandleRestoreAfterEnterForeground;
    MMLiveTaskId *_taskId;
    FinderLiveBoxId *_boxId;
    id <MMFinderLiveCommentBaseContentDelegate> _delegate;
    CDUnknownBlockType _commentContentAreaTopChangedCallback;
    CDUnknownBlockType _getContentShowCallback;
    CDUnknownBlockType _onCommentContentViewDidTapCallback;
    CDUnknownBlockType _getCommentTableViewModelCallback;
    UIView *_commentTableBackView;
    MMTableView *_commentTableView;
    MMLiveCommentTableViewModel *_commentTableViewModel;
    UIView *_commentTableTapView;
    MMLiveUnReadCountView *_unReadCountLabel;
    MMLiveCommentPubbleView *_banCommentPubbleView;
    CDUnknownBlockType _getNeedHideCommentTableBackViewCallback;
    CDUnknownBlockType _onCommentTipTapCallback;
    CAGradientLayer *_commentTableBackGradientLayer;
    MMLiveCommentDataItem *_visbleCommentItemBeforeLayout;
    MMLiveCommentDataItem *_visbleCommentItemBeforeMinimize;
    MMLiveCommentDataItem *_visbleCommentItemBeforeEnterBackground;
    UIPanGestureRecognizer *_contentPanGesture;
    MMUIButton *_commentContentButton;
    UIView *_commentTableViewTopCommentContainerView;
    UIView *_commentTableViewTopHotWordsContainerView;
    MMFinderLiveCommentDirectDisplayCellWrapper *_currDirectDisplayCell;
    double _previousCommentContentTop;
    struct CGPoint _panBeginContentOffset;
}

+ (double)currentCommentTableWidth:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)commentTableWidthPortrait:(id)arg1;
+ (double)commentTableWidth:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double previousCommentContentTop; // @synthesize previousCommentContentTop=_previousCommentContentTop;
@property(nonatomic) struct CGPoint panBeginContentOffset; // @synthesize panBeginContentOffset=_panBeginContentOffset;
@property(retain, nonatomic) MMFinderLiveCommentDirectDisplayCellWrapper *currDirectDisplayCell; // @synthesize currDirectDisplayCell=_currDirectDisplayCell;
@property(retain, nonatomic) UIView *commentTableViewTopHotWordsContainerView; // @synthesize commentTableViewTopHotWordsContainerView=_commentTableViewTopHotWordsContainerView;
@property(retain, nonatomic) UIView *commentTableViewTopCommentContainerView; // @synthesize commentTableViewTopCommentContainerView=_commentTableViewTopCommentContainerView;
@property(retain, nonatomic) MMUIButton *commentContentButton; // @synthesize commentContentButton=_commentContentButton;
@property(retain, nonatomic) UIPanGestureRecognizer *contentPanGesture; // @synthesize contentPanGesture=_contentPanGesture;
@property(nonatomic) _Bool needHandleRestoreAfterEnterForeground; // @synthesize needHandleRestoreAfterEnterForeground=_needHandleRestoreAfterEnterForeground;
@property(nonatomic) _Bool needHandleRestoreAfterMinimize; // @synthesize needHandleRestoreAfterMinimize=_needHandleRestoreAfterMinimize;
@property(nonatomic) _Bool needHandleRestoreAfterLayout; // @synthesize needHandleRestoreAfterLayout=_needHandleRestoreAfterLayout;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeEnterBackground; // @synthesize needTableViewAutoScrollToRereshBeforeEnterBackground=_needTableViewAutoScrollToRereshBeforeEnterBackground;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeMinimize; // @synthesize needTableViewAutoScrollToRereshBeforeMinimize=_needTableViewAutoScrollToRereshBeforeMinimize;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeRotate; // @synthesize needTableViewAutoScrollToRereshBeforeRotate=_needTableViewAutoScrollToRereshBeforeRotate;
@property(retain, nonatomic) MMLiveCommentDataItem *visbleCommentItemBeforeEnterBackground; // @synthesize visbleCommentItemBeforeEnterBackground=_visbleCommentItemBeforeEnterBackground;
@property(retain, nonatomic) MMLiveCommentDataItem *visbleCommentItemBeforeMinimize; // @synthesize visbleCommentItemBeforeMinimize=_visbleCommentItemBeforeMinimize;
@property(retain, nonatomic) MMLiveCommentDataItem *visbleCommentItemBeforeLayout; // @synthesize visbleCommentItemBeforeLayout=_visbleCommentItemBeforeLayout;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) _Bool hasPrepared; // @synthesize hasPrepared=_hasPrepared;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(nonatomic) _Bool isSynchronizeLayout; // @synthesize isSynchronizeLayout=_isSynchronizeLayout;
@property(retain, nonatomic) CAGradientLayer *commentTableBackGradientLayer; // @synthesize commentTableBackGradientLayer=_commentTableBackGradientLayer;
@property(copy, nonatomic) CDUnknownBlockType onCommentTipTapCallback; // @synthesize onCommentTipTapCallback=_onCommentTipTapCallback;
@property(copy, nonatomic) CDUnknownBlockType getNeedHideCommentTableBackViewCallback; // @synthesize getNeedHideCommentTableBackViewCallback=_getNeedHideCommentTableBackViewCallback;
@property(retain, nonatomic) MMLiveCommentPubbleView *banCommentPubbleView; // @synthesize banCommentPubbleView=_banCommentPubbleView;
@property(retain, nonatomic) MMLiveUnReadCountView *unReadCountLabel; // @synthesize unReadCountLabel=_unReadCountLabel;
@property(retain, nonatomic) UIView *commentTableTapView; // @synthesize commentTableTapView=_commentTableTapView;
@property(retain, nonatomic) MMLiveCommentTableViewModel *commentTableViewModel; // @synthesize commentTableViewModel=_commentTableViewModel;
@property(retain, nonatomic) MMTableView *commentTableView; // @synthesize commentTableView=_commentTableView;
@property(retain, nonatomic) UIView *commentTableBackView; // @synthesize commentTableBackView=_commentTableBackView;
@property(copy, nonatomic) CDUnknownBlockType getCommentTableViewModelCallback; // @synthesize getCommentTableViewModelCallback=_getCommentTableViewModelCallback;
@property(copy, nonatomic) CDUnknownBlockType onCommentContentViewDidTapCallback; // @synthesize onCommentContentViewDidTapCallback=_onCommentContentViewDidTapCallback;
@property(copy, nonatomic) CDUnknownBlockType getContentShowCallback; // @synthesize getContentShowCallback=_getContentShowCallback;
@property(copy, nonatomic) CDUnknownBlockType commentContentAreaTopChangedCallback; // @synthesize commentContentAreaTopChangedCallback=_commentContentAreaTopChangedCallback;
@property(nonatomic) __weak id <MMFinderLiveCommentBaseContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool forbidCommentTableViewScroll; // @synthesize forbidCommentTableViewScroll=_forbidCommentTableViewScroll;
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @synthesize boxId=_boxId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)disableOffscreenWithState:(long long)arg1;
- (void)reportForUnDisplay;
- (void)reportForDisplay;
- (void)clearEnterBackgroundRestoreData;
- (void)clearLayoutRestoreData;
- (void)clearMinimizeRestoreData;
- (void)clearCommentRestoreData;
- (void)restoreCommentDataWithAutoScrollToRefresh:(_Bool)arg1 lastVisibleItem:(id)arg2;
- (void)restoreCommentDataAfterEnterForeground;
- (void)storeCommentDataBeforeEnterBackground;
- (void)restoreCommentDataAfterMinimize;
- (void)storeCommentDataBeforeMinimize;
- (void)delayCheckAndRestartRefresh;
- (void)restoreVisibleCommentAfterLayout;
- (void)limitCommentCntBeforeLayout;
- (void)storeVisibleCommentBeforeLayout;
- (void)handleUnReadCountLabelTap:(id)arg1;
- (void)handleCommentTableBackTapGesture:(id)arg1;
- (void)buttonAction:(id)arg1 event:(id)arg2;
- (void)handleCommentContentViewTapGesture:(id)arg1;
- (void)handleInteractiveForCommentContentContainerView:(id)arg1 tableView:(id)arg2;
- (void)handleScrollConflicts:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handleCommentContentViewPanGesture:(id)arg1;
- (_Bool)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)getIsEnableChangeContentState;
- (_Bool)getIsShowingInputView;
- (id)lastLoadedComment;
- (_Bool)getEnableShowContentTabBar;
- (_Bool)getNeedHideCommentTableBackView;
- (_Bool)getIsContentShow;
- (Class)commentTableCellClass;
- (id)registerCellClasses;
- (struct CGRect)commentTableTapViewFrame;
- (double)commentTableHeight;
- (double)commentTableWidth;
@property(readonly, nonatomic) double commentContentViewTop;
- (void)tapOnUnReadCountLabel;
- (struct CGRect)getDisablePivotPanGestureArea;
- (void)removeCommentGradientMask;
- (void)addCommentGradientMask;
- (void)makeCommentTableContentAtBottom;
- (struct CGPoint)getCommentTablePanBeginContentOffset;
- (void)setCommentTableContentOffset:(struct CGPoint)arg1;
- (void)handleForCommentContentViewDisplay:(_Bool)arg1;
- (void)displayBanCommentPubbleView:(id)arg1;
- (void)hideBanCommentTipPubbleView;
- (double)getCommentTableRelativeLeft;
- (double)getCommentTableRelativeRight;
- (void)updateEnableScroll:(_Bool)arg1;
- (void)updateCommentTableContentDisplay:(_Bool)arg1;
- (void)updateCommentTableDisplay;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(_Bool)arg1;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (void)checkCommentContentTopIsChanged;
- (void)reloadDataIfNeed;
- (void)forceLayoutIfNeed;
- (void)unDisplay;
- (void)display;
- (id)commentDataMgr;
- (void)unPrepare;
- (void)prepareForDisplay;
- (void)onExitLive;
- (void)onEnterLive;
- (void)onDirectDisplayCommentCellDismiss:(id)arg1 checkCallback:(CDUnknownBlockType)arg2 endCallback:(CDUnknownBlockType)arg3;
- (_Bool)showDirectDisplayComment:(id)arg1 checkCallback:(CDUnknownBlockType)arg2 endCallback:(CDUnknownBlockType)arg3;
- (void)removeViewsForUnPrepare;
- (double)commentTableTop;
- (void)adjustCommentTableViewHeightAnimated:(_Bool)arg1;
- (void)adjustCommentTableViewHeight;
- (id)createUnReadCountLabel;
- (void)layoutUnReadCountLabel;
- (void)layoutCommentTableTapView;
- (void)layoutCommentTableViewTopCommentContainerView;
- (void)layoutCommentTableViewTopHotWordsContainerView;
- (id)createHotWordsCommentContainerViewIfNeeded;
- (id)createTopCommentContainerViewIfNeeded;
- (struct CGRect)getCommentTableViewFrame;
- (id)createCommentTableView;
- (void)layoutCommentTableView;
- (void)layoutDirectDisplayCell;
- (void)recreateCommentTableBackGradientLayerIfExists;
- (void)createCommentTableBackGradientLayer;
- (_Bool)isGradientMaskMustExist;
- (double)gradientMaskTopSpacing;
- (void)updateCommentTableHeightRecord:(double)arg1;
- (void)layoutCommentTableBackView;
- (void)layoutCommentContentTapView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)getCommentContentButton;
- (void)addGestures;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

