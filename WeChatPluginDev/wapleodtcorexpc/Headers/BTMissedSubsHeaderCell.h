//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTMissedSubsHeaderViewModel, BrandLiveStatusButton, MMHeadImageView, MMUILabel, UIImageView, UILongPressGestureRecognizer;

@interface BTMissedSubsHeaderCell
{
    _Bool _forceHighlight;
    MMHeadImageView *_headView;
    MMUILabel *_nameLabel;
    UIImageView *_starView;
    BrandLiveStatusButton *_liveButton;
    MMUILabel *_descLabel;
    UILongPressGestureRecognizer *_longPressGest;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceHighlight; // @synthesize forceHighlight=_forceHighlight;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGest; // @synthesize longPressGest=_longPressGest;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) BrandLiveStatusButton *liveButton; // @synthesize liveButton=_liveButton;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
- (void)handleLongPress:(id)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)forceSetHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateCellOnPageAppear;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTMissedSubsHeaderViewModel *viewModel; // @dynamic viewModel;

@end

