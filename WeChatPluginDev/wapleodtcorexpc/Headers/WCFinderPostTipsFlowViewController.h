//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, WCFinderFeedFlowView, WCFinderStreamProfilePostTipsFeedFlowViewModel;

@interface WCFinderPostTipsFlowViewController
{
    WCFinderStreamProfilePostTipsFeedFlowViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_reasonLabel;
    UIButton *_postButton;
    WCFinderFeedFlowView *_feedFlowView;
    unsigned long long _enterTimeMS;
    CDUnknownBlockType _clickPostButtonBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickPostButtonBlock; // @synthesize clickPostButtonBlock=_clickPostButtonBlock;
@property(nonatomic) unsigned long long enterTimeMS; // @synthesize enterTimeMS=_enterTimeMS;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderStreamProfilePostTipsFeedFlowViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (int)streamProfilePostTipsVMGetCommentScene;
- (void)streamProfilePostTipsVMDataDidChange;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onClickPostButton;
- (id)genReportDict;
- (unsigned long long)getCurrentViewState;
- (int)commentScene;
- (void)setupSubView;
- (void)setupPageSheetConfig;
- (void)setupData;
- (void)viewDidLoad;
- (double)pageSheetContentHeight;
- (id)initWithPostTipsInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

