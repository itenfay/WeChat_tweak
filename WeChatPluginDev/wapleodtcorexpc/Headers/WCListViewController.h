//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMCommonActionSheetPicker, NSArray, NSMutableArray, NSString, UIBarButtonItem, UIButton, UIColor, WCCoverActionReporter, WCMomentsPageContext, WCTimeLineFooterView, WCTogetherHistoryReportSession;
@protocol WCListViewProtocol;

@interface WCListViewController
{
    _Bool m_isMyWC;
    NSMutableArray *m_arrPhotoDatas;
    CContact *m_contact;
    _Bool m_isNoMoreData;
    NSMutableArray *m_starredDataItems;
    id <WCListViewProtocol> m_view;
    unsigned int _startTime;
    _Bool _bHideBackgroundCover;
    _Bool _expandsCoverAfterFirstAppeared;
    _Bool _bForbiddenNavgationBarInteractive;
    _Bool _noMoreDataAtTop;
    _Bool _noMoreDataAtBottom;
    _Bool _jumpState;
    _Bool _isStarBrowsingEnabled;
    unsigned int _sourceScene;
    unsigned int _albumEntranceThumbnailCnt;
    long long _homepageType;
    WCMomentsPageContext *_pageContext;
    long long _rightBarItemStyle;
    UIColor *_leftBarItemColor;
    WCCoverActionReporter *_coverActionReporter;
    UIBarButtonItem *_togetherBarButtonItem;
    MMCommonActionSheetPicker *_yearMonthPickerView;
    NSArray *_yearsData;
    NSArray *_monthsDatas;
    WCTimeLineFooterView *_yearMonthJumpingView;
    UIButton *_yearMonthJumpRetryView;
    unsigned long long _itemIdForYearMonthJump;
    WCTogetherHistoryReportSession *_cachedTogetherHistoryReportSession;
    long long _puzzleImageViewLayoutStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long puzzleImageViewLayoutStyle; // @synthesize puzzleImageViewLayoutStyle=_puzzleImageViewLayoutStyle;
@property(nonatomic) _Bool isStarBrowsingEnabled; // @synthesize isStarBrowsingEnabled=_isStarBrowsingEnabled;
@property(retain, nonatomic) WCTogetherHistoryReportSession *cachedTogetherHistoryReportSession; // @synthesize cachedTogetherHistoryReportSession=_cachedTogetherHistoryReportSession;
@property(nonatomic) unsigned long long itemIdForYearMonthJump; // @synthesize itemIdForYearMonthJump=_itemIdForYearMonthJump;
@property(retain, nonatomic) UIButton *yearMonthJumpRetryView; // @synthesize yearMonthJumpRetryView=_yearMonthJumpRetryView;
@property(retain, nonatomic) WCTimeLineFooterView *yearMonthJumpingView; // @synthesize yearMonthJumpingView=_yearMonthJumpingView;
@property(nonatomic) _Bool jumpState; // @synthesize jumpState=_jumpState;
@property(nonatomic, getter=isNoMoreDataAtBottom) _Bool noMoreDataAtBottom; // @synthesize noMoreDataAtBottom=_noMoreDataAtBottom;
@property(nonatomic, getter=isNoMoreDataAtTop) _Bool noMoreDataAtTop; // @synthesize noMoreDataAtTop=_noMoreDataAtTop;
@property(retain, nonatomic) NSArray *monthsDatas; // @synthesize monthsDatas=_monthsDatas;
@property(retain, nonatomic) NSArray *yearsData; // @synthesize yearsData=_yearsData;
@property(retain, nonatomic) MMCommonActionSheetPicker *yearMonthPickerView; // @synthesize yearMonthPickerView=_yearMonthPickerView;
@property(retain, nonatomic) UIBarButtonItem *togetherBarButtonItem; // @synthesize togetherBarButtonItem=_togetherBarButtonItem;
@property(retain, nonatomic) WCCoverActionReporter *coverActionReporter; // @synthesize coverActionReporter=_coverActionReporter;
@property(nonatomic) unsigned int albumEntranceThumbnailCnt; // @synthesize albumEntranceThumbnailCnt=_albumEntranceThumbnailCnt;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) UIColor *leftBarItemColor; // @synthesize leftBarItemColor=_leftBarItemColor;
@property(nonatomic) long long rightBarItemStyle; // @synthesize rightBarItemStyle=_rightBarItemStyle;
@property(nonatomic) _Bool bForbiddenNavgationBarInteractive; // @synthesize bForbiddenNavgationBarInteractive=_bForbiddenNavgationBarInteractive;
@property(nonatomic) _Bool expandsCoverAfterFirstAppeared; // @synthesize expandsCoverAfterFirstAppeared=_expandsCoverAfterFirstAppeared;
@property(nonatomic) _Bool bHideBackgroundCover; // @synthesize bHideBackgroundCover=_bHideBackgroundCover;
@property(readonly, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(readonly, nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)updateBehaviourInfoSessionFromTogetherHistoryReportSession;
- (void)updateBehaviourInfoSessionForTogetherEntranceState;
- (_Bool)isNoMoreData;
- (id)behaviourInfoSession;
- (void)reportOnViewDisappear;
- (void)reportOnViewApper;
- (void)reportOnEnd;
- (void)reportOnBeign;
- (void)calcYearMonthPickerViewData;
- (void)tryCalcYearMonthPickerViewData;
- (void)updateYearMonthPicker:(id)arg1 month:(id)arg2;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)commonPickerConfirm:(id)arg1;
- (void)commonPickerDismissed:(id)arg1;
- (void)onFinishSendWithoutAnim:(id)arg1;
- (void)commitAnimationWillStart:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)WCListViewDidClickYearMonthFlowLabel:(id)arg1 month:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onHomepage:(id)arg1 type:(long long)arg2 clearJumpState:(id)arg3;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updatePrePage:(id)arg3;
- (void)onHomepage:(id)arg1 type:(long long)arg2 fetchDataBeforeJumpEnd:(id)arg3 success:(_Bool)arg4;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(id)arg4 changedData:(id)arg5 deletedData:(id)arg6 tips:(id)arg7;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateYearMonthData:(id)arg3;
- (void)willShow;
- (void)hideYearMonthJumpRetryView;
- (void)onRetryJump;
- (void)showYearMonthJumpRetryView;
- (void)hideYearMonthJumpingView;
- (void)showYearMonthJumpingView;
- (void)clearJumpState;
- (_Bool)refreshPrePage;
- (void)refreshFooter;
- (void)updateJumpState;
- (void)reloadDataWithPrePageUpdate:(_Bool)arg1;
- (void)reloadData;
- (void)initData:(_Bool)arg1;
- (void)onTogetherBarButtonItemClicked:(id)arg1;
- (void)onDissmiss;
- (void)onOperate:(id)arg1;
- (void)reloadStyle;
- (id)generateTogetherBarButtonItemIfNeeded;
- (void)addTogetherBarButtonItemIfNeeded;
- (void)initBarItem;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)contactDisplayname;
- (id)displayTitle;
- (id)rightTitleLabelWithTitle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithHomepageType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

