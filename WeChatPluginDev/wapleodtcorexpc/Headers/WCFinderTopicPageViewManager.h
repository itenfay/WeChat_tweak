//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderFeedFlowView, WCFinderTopicPageViewModel;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderTopicPageViewManagerDelegate;

@interface WCFinderTopicPageViewManager : NSObject
{
    id <WCFinderTopicPageViewManagerDelegate> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderTopicPageViewModel *_viewModel;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) WCFinderTopicPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderTopicPageViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportClickActionInfo:(id)arg1;
- (id)genFeedReportInfoWithEventCode:(long long)arg1 tid:(id)arg2;
- (void)reportFeedStreamClickWithFeedFlowView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)finderTopicGetReviseFeedCount:(unsigned int)arg1;
- (void)finderTopicInvalidWithErrorCode:(int)arg1;
- (void)finderTopicNoMoreData;
- (void)finderTopicAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderTopicReloadAllDataWithPrefetched:(_Bool)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 filterIndex:(unsigned long long)arg3 view:(id)arg4 InViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

