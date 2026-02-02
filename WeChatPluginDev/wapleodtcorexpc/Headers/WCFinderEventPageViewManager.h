//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderEventPageViewModel, WCFinderFeedFlowView;
@protocol WCFinderEventPageViewManagerDelegate, WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderEventPageViewManager : NSObject
{
    id <WCFinderEventPageViewManagerDelegate> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderEventPageViewModel *_viewModel;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) WCFinderEventPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderEventPageViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderEventInvalidWithErrorCode:(int)arg1;
- (void)finderEventNoMoreData;
- (void)finderEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderEventReloadAllData;
- (void)finderEventReceiveFirstPageWithPrefetched:(_Bool)arg1;
- (void)finderEventFeedOrderChanged;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 filterIndex:(unsigned long long)arg3 view:(id)arg4 InViewController:(id)arg5 byPassInfo:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

