//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSIndexPath, NSString, WCFinderFeedFlowView, WCFinderNoMoreView, WCFinderPoiPageViewModel;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderPoiPageViewManager : NSObject
{
    _Bool _enableZoomAnimator;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderPoiPageViewModel *_viewModel;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
    NSIndexPath *_serviceAuthBlockedIndexPath;
    WCFinderNoMoreView *_tipsView;
    struct CGPoint _targetContentOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNoMoreView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSIndexPath *serviceAuthBlockedIndexPath; // @synthesize serviceAuthBlockedIndexPath=_serviceAuthBlockedIndexPath;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) WCFinderPoiPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool enableZoomAnimator; // @synthesize enableZoomAnimator=_enableZoomAnimator;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (id)streamReportUDFKV:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (void)finderPoiInvalidWithErrorCode:(int)arg1 viewModel:(id)arg2;
- (void)finderPoiNoMoreData:(id)arg1;
- (void)finderPoiAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 viewModel:(id)arg3;
- (void)finderPoiReloadAllData:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)didClickFeedItemWithIndexPath:(id)arg1 feedFlowView:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 indexPathOfTid:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 tabIndex:(unsigned long long)arg3 filterIndex:(unsigned long long)arg4 DataArray:(id)arg5 lastBuffer:(id)arg6 continueFlag:(_Bool)arg7 view:(id)arg8 InViewController:(id)arg9 nearbyFlag:(_Bool)arg10 nearbyInfo:(id)arg11 prefetchCount:(unsigned long long)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

