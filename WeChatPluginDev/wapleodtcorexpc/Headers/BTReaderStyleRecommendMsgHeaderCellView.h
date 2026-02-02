//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTReaderStyleRecommendMsgHeaderCellViewModel, MMUILabel, UILabel;

@interface BTReaderStyleRecommendMsgHeaderCellView
{
    UILabel *m_headerLabel;
    MMUILabel *m_aggregationLabel;
    MMUILabel *m_timeLabel;
    _Bool _forceSetHighlight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceSetHighlight; // @synthesize forceSetHighlight=_forceSetHighlight;
- (id)getAggregationLabelAccessibilityLabel;
- (void)forceSetHighlight:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)needHighlightLayer;
- (void)initTimeLabel;
- (void)initAggregationLabel;
- (void)initHeaderTitleLabel;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) BTReaderStyleRecommendMsgHeaderCellViewModel *viewModel;

@end

