//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandFinderLiveBaseCardView, BrandFinderLiveMessageViewModel, NSString;

@interface BrandFinderLiveMessageCellView
{
    BrandFinderLiveBaseCardView *_cardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandFinderLiveBaseCardView *cardView; // @synthesize cardView=_cardView;
- (void)brandFinderLiveMessageCellViewRecommendReasonChanged;
- (void)brandFinderLiveMessageCellViewReplayStatusChanged;
- (void)brandFinderLiveMessageCellViewLiveStatusChanged;
- (id)operationMenuItems;
- (void)setHighlighted:(_Bool)arg1;
- (void)doForward;
- (void)onTouchUpInside;
- (void)layoutContentView;
- (void)prepareForReuse;
- (_Bool)isAccessibilityElement;
- (_Bool)canBeReused;
- (void)onAppear;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BrandFinderLiveMessageViewModel *viewModel; // @dynamic viewModel;

@end

