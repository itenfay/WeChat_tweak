//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTBaseRecommendAppMsgCellViewModel, UILongPressGestureRecognizer, UIView;

@interface BTMissedSubsBaseItemCell
{
    _Bool _forceHighlight;
    UILongPressGestureRecognizer *_longPressGest;
    UIView *_highlightMaskView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceHighlight; // @synthesize forceHighlight=_forceHighlight;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGest; // @synthesize longPressGest=_longPressGest;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)forceSetHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)handleLongPressEx:(id)arg1;
- (void)addLongPressGesture;
- (void)layoutHightMaskView;
- (unsigned long long)contentViewRaddiCorners;
- (void)addRaddiCorner;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)updateCoverImg:(id)arg1 urlStr:(id)arg2;
- (void)configureLayout;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTBaseRecommendAppMsgCellViewModel *viewModel; // @dynamic viewModel;

@end

