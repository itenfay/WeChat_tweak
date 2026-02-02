//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGameUserInfo, NSString, WCFinderFeedFlowView, WCFinderLiveStarterGamePageViewModel;
@protocol WCFinderLiveStarterGamePageViewManagerDelegate;

@interface WCFinderLiveStarterGamePageViewManager : NSObject
{
    id <WCFinderLiveStarterGamePageViewManagerDelegate> _delegate;
    WCFinderLiveStarterGamePageViewModel *_viewModel;
    WCFinderFeedFlowView *_feedFlowView;
    MMFinderLiveGameUserInfo *_selectGameUserInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *selectGameUserInfo; // @synthesize selectGameUserInfo=_selectGameUserInfo;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderLiveStarterGamePageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderLiveStarterGamePageViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (long long)getNumberOfItemsInSection;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (void)onLiveHomeGameTabLiveStreamFetchFailWithErrorCode:(int)arg1;
- (void)onLiveHomeGameTabLiveStreamNoMoreData;
- (void)onLiveGameTabLiveStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveGameTabLiveStreamReloadAllData;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)updateSelectLiveGameUserInfo:(id)arg1;
- (id)initWithTabInfo:(id)arg1 feedFlowView:(id)arg2 selectGameUserInfo:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

