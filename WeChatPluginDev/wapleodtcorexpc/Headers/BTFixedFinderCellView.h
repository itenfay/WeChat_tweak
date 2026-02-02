//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTFixedFinderCellViewModel, NSArray, NSMutableArray;
@protocol BTFixedFinderCellViewDelegate;

@interface BTFixedFinderCellView
{
    id <BTFixedFinderCellViewDelegate> _finderCellViewDelegate;
    NSMutableArray *_finderItemViewArr;
    NSMutableArray *_voiceOverElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
@property(retain, nonatomic) NSMutableArray *finderItemViewArr; // @synthesize finderItemViewArr=_finderItemViewArr;
@property(nonatomic) __weak id <BTFixedFinderCellViewDelegate> finderCellViewDelegate; // @synthesize finderCellViewDelegate=_finderCellViewDelegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)initVoiceOverElements;
@property(readonly, nonatomic) NSArray *finderViewArr;
- (unsigned long long)cellRectCorner;
- (void)layoutCardView;
- (void)layoutSubviews;
- (id)finderItemViewContentWithIndex:(long long)arg1;
- (void)setFinderItemViewContentAreaWithIndex:(long long)arg1 bHighlight:(_Bool)arg2;
- (void)setFinderItemViewInfoAreaWithIndex:(long long)arg1 bHighlight:(_Bool)arg2;
- (struct CGRect)convertFinderItemViewFrameWithIndex:(long long)arg1 toView:(id)arg2 isInfoArea:(_Bool)arg3;
- (void)didHideFinderItemViewWithIndex:(long long)arg1;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (id)createBaseItemViewWithItemViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTFixedFinderCellViewModel *viewModel; // @dynamic viewModel;

@end

