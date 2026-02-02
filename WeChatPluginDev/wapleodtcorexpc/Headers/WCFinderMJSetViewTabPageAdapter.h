//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedFlowView, WCFinderMJSetTabModel, WCFinderMJSetViewController;

@interface WCFinderMJSetViewTabPageAdapter : NSObject
{
    WCFinderMJSetTabModel *_tabModel;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderMJSetViewController *_hostVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderMJSetViewController *hostVC; // @synthesize hostVC=_hostVC;
@property(nonatomic) __weak WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderMJSetTabModel *tabModel; // @synthesize tabModel=_tabModel;
- (id)onStaticCellLeftTopBadgeContent:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 leftTopBadgeContent:(id)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onTabModelDataStateChanged:(id)arg1;
- (void)onTabModel:(id)arg1 appendDataFromRange:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

