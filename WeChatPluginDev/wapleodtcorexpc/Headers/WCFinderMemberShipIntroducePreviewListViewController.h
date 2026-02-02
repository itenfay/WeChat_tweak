//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UIView, WCFinderFeedFlowView, WCFinderMaskButton, WCFinderMemberShipPreviewListViewModel, WCFinderStreamProfileDragBarView;
@protocol WCFinderMemberShipIntroducePreviewListViewControllerDelegate;

@interface WCFinderMemberShipIntroducePreviewListViewController
{
    id <WCFinderMemberShipIntroducePreviewListViewControllerDelegate> _previewDelegate;
    NSString *_finderUsername;
    unsigned long long _feedPageType;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderMemberShipPreviewListViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    WCFinderMaskButton *_confirmButton;
    NSString *_titleStr;
    NSString *_subTitleStr;
    unsigned long long _entranceSource;
    WCFinderStreamProfileDragBarView *_dragBarView;
    UIView *_topViewContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topViewContainer; // @synthesize topViewContainer=_topViewContainer;
@property(retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView; // @synthesize dragBarView=_dragBarView;
@property(nonatomic) unsigned long long entranceSource; // @synthesize entranceSource=_entranceSource;
@property(copy, nonatomic) NSString *subTitleStr; // @synthesize subTitleStr=_subTitleStr;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) WCFinderMaskButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderMemberShipPreviewListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) unsigned long long feedPageType; // @synthesize feedPageType=_feedPageType;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) __weak id <WCFinderMemberShipIntroducePreviewListViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(_Bool)arg2;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)onClickConfirm;
- (double)getMaxHalfScreenHeight;
- (void)finderMemberShipPreviewListViewFetchListFail;
- (void)finderMemberShipPreviewListViewFetchListSuc;
- (void)finderMemberShipPreviewListViewNoMoreData;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)bindPageReport;
- (void)setupSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1 feedPageType:(unsigned long long)arg2 entranceSource:(unsigned long long)arg3 titleStr:(id)arg4 subTitleStr:(id)arg5 lastBuffer:(id)arg6 collectionTopicId:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

