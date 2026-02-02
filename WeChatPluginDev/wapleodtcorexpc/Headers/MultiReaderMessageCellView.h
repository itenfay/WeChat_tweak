//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiReaderMessageViewModel, NSMutableArray, NSString;

@interface MultiReaderMessageCellView
{
    unsigned int m_selectIndex;
    NSMutableArray *m_itemViewArr;
}

- (void).cxx_destruct;
- (void)multiReaderMessageCellViewRecommendReasonChangedForIndex:(unsigned int)arg1;
- (void)multiReaderMessageCellViewReplayStatusChangedForIndex:(unsigned int)arg1;
- (void)multiReaderMessageCellViewLiveStatusChangedForIndex:(unsigned int)arg1;
- (void)brandFinderLiveBaseCardViewDidLongClick:(id)arg1;
- (void)brandFinderLiveBaseCardViewDidClick:(id)arg1;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (id)getReadWraps;
- (void)onReaderItemDidLoadCoverImage:(unsigned int)arg1 coverImage:(id)arg2 cover:(id)arg3;
- (void)onReaderItemLongPress:(unsigned int)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(id)arg2;
- (void)onReaderItemBeginTouch:(unsigned int)arg1;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)isItemNoCover:(id)arg1;
- (id)itemViewWithShowtype:(long long)arg1 index:(unsigned int)arg2;
- (void)updateReaderItemViewBrandLiveContentStyle:(id)arg1 index:(int)arg2;
- (void)updateReaderItemViewTitleStyle:(id)arg1 index:(int)arg2;
- (void)layoutContentView;
- (void)onAppear;
- (_Bool)canBeReused;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MultiReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

