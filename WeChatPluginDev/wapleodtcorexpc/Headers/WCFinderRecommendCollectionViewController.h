//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, WCFinderAnimationLoadingView, WCFinderFeedFlowView, WCFinderFeedFlowViewAdapter, WCFinderRecommendCollectionViewModel;

@interface WCFinderRecommendCollectionViewController
{
    int _customCommentScene;
    WCFinderFeedFlowViewAdapter *_flowViewAdapter;
    WCFinderRecommendCollectionViewModel *_viewModel;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCFinderFeedFlowView *_feedFlowView;
    unsigned long long _enterTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) int customCommentScene; // @synthesize customCommentScene=_customCommentScene;
@property(retain, nonatomic) WCFinderRecommendCollectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowViewAdapter *flowViewAdapter; // @synthesize flowViewAdapter=_flowViewAdapter;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)getHalfContainerView;
- (void)feedListViewControllerWillAppear:(id)arg1;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderRecommendCollectionHeaderChanged:(id)arg1;
- (void)initFlowViewAdapter;
- (void)layoutUI;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)loadContentView;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

