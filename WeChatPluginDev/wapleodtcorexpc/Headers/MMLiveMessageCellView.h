//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveMessageViewModel, MMUIImageView, MMUILabel, UIView;

@interface MMLiveMessageCellView
{
    MMUILabel *_liveNameLabel;
    MMUILabel *_liveStatusLabel;
    MMUIImageView *_liveIconAnimatedView;
    MMUIImageView *_liveIconView;
    MMUILabel *_liveSourceLabel;
    UIView *_seperatorLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperatorLineView; // @synthesize seperatorLineView=_seperatorLineView;
@property(retain, nonatomic) MMUILabel *liveSourceLabel; // @synthesize liveSourceLabel=_liveSourceLabel;
@property(retain, nonatomic) MMUIImageView *liveIconView; // @synthesize liveIconView=_liveIconView;
@property(retain, nonatomic) MMUIImageView *liveIconAnimatedView; // @synthesize liveIconAnimatedView=_liveIconAnimatedView;
@property(retain, nonatomic) MMUILabel *liveStatusLabel; // @synthesize liveStatusLabel=_liveStatusLabel;
@property(retain, nonatomic) MMUILabel *liveNameLabel; // @synthesize liveNameLabel=_liveNameLabel;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)updateLiveLogoStatus;
- (void)reloadData;
- (void)layoutDefault;
- (void)initBgImageView;
- (void)layoutSubviews;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) MMLiveMessageViewModel *viewModel; // @dynamic viewModel;

@end

