//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIButton, UIView, WCFinderFeedListView, WCFinderFeedPickerParams;
@protocol WCFinderFeedPickerPreviewListViewControllerDelegate, WCFinderFeedPickerPreviewListViewModelProtocol;

@interface WCFinderFeedPickerPreviewListViewController
{
    _Bool _canScrollToFirstAppearIndex;
    WCFinderFeedPickerParams *_params;
    id <WCFinderFeedPickerPreviewListViewControllerDelegate> _delegate;
    WCFinderFeedListView *_feedListView;
    id <WCFinderFeedPickerPreviewListViewModelProtocol> _viewModel;
    unsigned long long _firstAppearFeedIndex;
    CDUnknownBlockType _pushCustomVCBlock;
    MMUIButton *_doneBtn;
    UIView *_line;
    UIButton *_moreFeedTipsBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *moreFeedTipsBtn; // @synthesize moreFeedTipsBtn=_moreFeedTipsBtn;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(copy, nonatomic) CDUnknownBlockType pushCustomVCBlock; // @synthesize pushCustomVCBlock=_pushCustomVCBlock;
@property(nonatomic) _Bool canScrollToFirstAppearIndex; // @synthesize canScrollToFirstAppearIndex=_canScrollToFirstAppearIndex;
@property(nonatomic) unsigned long long firstAppearFeedIndex; // @synthesize firstAppearFeedIndex=_firstAppearFeedIndex;
@property(retain, nonatomic) id <WCFinderFeedPickerPreviewListViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) __weak id <WCFinderFeedPickerPreviewListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderFeedPickerParams *params; // @synthesize params=_params;
- (id)transitionHelperFetchCurrentPlayTid;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (void)finderPickerListTableViewCellDidClickDesctiption:(id)arg1 contentVM:(id)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (_Bool)isInSubScene;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)onBack;
- (void)onReturn:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)scrollToIndex:(long long)arg1;
- (_Bool)useTransparentNavibar;
- (void)setupSubViews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPickerTabModel:(id)arg1 selectedIndex:(unsigned long long)arg2 pushCustomVCBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

