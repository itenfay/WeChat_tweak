//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderChooseFeedTabControllerConfig, WCFinderChooseFeedTabViewModel, WCFinderFeedFlowView;
@protocol WCFinderChooseFeedTabControllerDelegate;

@interface WCFinderChooseFeedTabController : NSObject
{
    id <WCFinderChooseFeedTabControllerDelegate> _delegate;
    WCFinderChooseFeedTabControllerConfig *_config;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderChooseFeedTabViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderChooseFeedTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderChooseFeedTabControllerConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCFinderChooseFeedTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderChooseFeedTabVMDataChange:(id)arg1 hasMore:(_Bool)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (_Bool)_isLimitByLimiter:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)topInset;
- (int)tabType;
- (void)setViewFrame:(struct CGRect)arg1;
- (struct CGRect)viewFrame;
- (void)setSelfViewWithFrame:(struct CGRect)arg1 toSuperView:(id)arg2;
- (void)onSwitchToThisPage:(_Bool)arg1;
- (id)initWithTabModel:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

