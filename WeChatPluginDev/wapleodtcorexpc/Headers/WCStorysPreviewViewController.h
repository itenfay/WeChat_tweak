//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, WCStoryPageControl, WCStoryPreivewPageCollectionController, WCStoryPreviewReportObj;
@protocol WCStorysPreviewViewControllerDelegate;

@interface WCStorysPreviewViewController
{
    WCStoryPreivewPageCollectionController *m_collectionController;
    WCStoryPageControl *pageControl;
    MMUIButton *m_closeBtn;
    _Bool _disableResumeMusic;
    _Bool _hidePageControl;
    _Bool _canDeleteMyOwnStory;
    _Bool _scrollEnabled;
    id <WCStorysPreviewViewControllerDelegate> _delegate;
    WCStoryPreviewReportObj *_previewReportObj;
    unsigned long long _statusChangePreviewType;
    MMUIButton *_moreActionBtn;
    struct CGRect _originFrame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIButton *moreActionBtn; // @synthesize moreActionBtn=_moreActionBtn;
@property(nonatomic) unsigned long long statusChangePreviewType; // @synthesize statusChangePreviewType=_statusChangePreviewType;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
@property(nonatomic) __weak id <WCStorysPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool canDeleteMyOwnStory; // @synthesize canDeleteMyOwnStory=_canDeleteMyOwnStory;
@property(nonatomic) _Bool hidePageControl; // @synthesize hidePageControl=_hidePageControl;
@property(nonatomic) _Bool disableResumeMusic; // @synthesize disableResumeMusic=_disableResumeMusic;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
- (void)onCommentListView:(id)arg1 show:(_Bool)arg2;
- (void)onClickPageView:(id)arg1 toHideUIElement:(_Bool)arg2;
- (void)onLongPressToDeletePageView:(id)arg1;
- (void)onStoryPageCollectionControllerChangePage:(id)arg1 pageView:(id)arg2 lastIndexPath:(id)arg3;
- (id)getPreloadMediaItems;
- (void)reportChangeFeaturedOrHiddenStatusWithTid:(id)arg1 videoType:(unsigned long long)arg2;
- (void)onLongPressToHidePageView:(id)arg1;
- (void)onReverseDataItemPrivateWithTid:(id)arg1 isInvisible:(_Bool)arg2;
- (id)updateItemOfDataUnitWithTid:(id)arg1;
- (void)onStoryDeleteSuccessWithDataTid:(id)arg1;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
- (void)onDataItemAllCommentMakeRead:(id)arg1;
- (void)onGetStoryComentDelete:(id)arg1;
- (void)onGetStoryUnReadComment:(id)arg1;
- (void)clickMoreAction;
- (void)hideSelf;
- (void)pageAction;
- (void)dragUPGestureReceived:(id)arg1;
- (void)markCommentRead:(unsigned long long)arg1;
- (void)reloadPageControl;
- (void)initTopButton;
- (void)initCollectionView;
- (void)initCollectionController;
- (void)tryToShowCommentList;
- (void)voiceOverElementEnable:(_Bool)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)hideVCAnimation;
- (void)reloadWithDataUnit:(id)arg1;
- (void)reloadWithDataItems:(id)arg1;
- (void)reportExitPreview;
- (void)markUserStoryHasRead:(id)arg1 lastIndexPath:(id)arg2;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)jumpToFirstUnreadCommentPage;
- (void)pause;
- (void)playInMute:(_Bool)arg1;
- (unsigned long long)dataItemCount;
- (_Bool)useTransparentNavibar;
- (void)didAppear;
- (void)willDisshow;
- (void)didDisshow;
- (void)willDisappear;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
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

